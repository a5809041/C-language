#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int year;
    short month;
    short day;
} Date;

typedef struct {
    char name[40];
    char university[40];
    char department[40];
    Date birthday;
    char hobby[40];
} Student;

void change(char *a){
   int i;
   for(i=strlen(a)-1;i<40;i++)a[i]='\0';
   }

int main(void)
{int c,i=0,number;
size_t n;
Student data[100],f,*p;
 FILE *fp;
 
 if (!(fp=fopen("bininfo","rb+"))) {
    fprintf (stderr, "Cannot open file myfile.txt for writing.\n");
    return(1);

}
fread(&number,sizeof(int),1,fp);

  while(c!=0){
  printf("Next choice, please: ");
  scanf("%d",&c);
  switch(c){
  
  case 0:
  break;
  
  case 1:
 fseek(fp,sizeof(int),SEEK_SET);
  while((n=(fread(&data[i].name,sizeof(char),40,fp)))!=0)
 {
  printf("Name: %s\n",data[i].name);
  fread(&data[i].university,sizeof(char),40,fp);
  
  printf("University: %s\n",data[i].university);
  fread(&data[i].department,sizeof(char),40,fp);
  
  printf("Department: %s\n",data[i].department);
  fread(&data[i].birthday.year,sizeof(int),1,fp);
  fread(&data[i].birthday.month,sizeof(short),1,fp);
  fread(&data[i].birthday.day,sizeof(short),1,fp);
  
  printf("Birthday: %d/%hd/%hd\n",data[i].birthday.year,data[i].birthday.month,data[i].birthday.day);
  
  fread(&data[i].hobby,sizeof(char),40,fp);
  
  printf("Hobby: %s\n",data[i].hobby);
  
  printf("\n");
  
  i++;
 }
  break;
  
  case 2:
  fseek(fp, 0 ,SEEK_SET);
  printf("Enter student number: ");
 scanf("%d",&i);
 for(--i;i!=0;i--) fseek(fp, sizeof(Student), SEEK_CUR);
  
  fseek(fp, sizeof(int), SEEK_CUR);
  
 fread(&f.name,sizeof(char),40,fp);
  
 printf("Name: %s\n",f.name);
 fread(&f.university,sizeof(char),40,fp);
  
 printf("University: %s\n",f.university);
  fread(&f.department,sizeof(char),40,fp);
  
  printf("Department: %s\n",f.department);
 fread(&f.birthday.year,sizeof(int),1,fp);
  fread(&f.birthday.month,sizeof(short),1,fp);
  fread(&f.birthday.day,sizeof(short),1,fp);
  
  printf("Birthday: %d/%hd/%hd\n",f.birthday.year,f.birthday.month,f.birthday.day);
  
 fread(&f.hobby,sizeof(char),40,fp);
  
  printf("Hobby: %s\n",f.hobby);
  
 printf("\n");
  break;
  
  case 3:
 fseek(fp, 0, SEEK_END);
 p=&f;
 
 printf("Input next student, please:\nName:\n");
 fgets(f.name,40,stdin);
 change(p->name);
 
 printf("University:\n");
 fgets(f.university,40,stdin);
 change(p->university);
 
 printf("Department:\n");
 fgets(f.department,40,stdin);
 change(p->department);
 
 printf("Birthday:\n");
 
 scanf("%d/%hd/%hd",&f.birthday.year,&f.birthday.month,&f.birthday.day);
 
 printf("Hobby:\n");
 fgets(f.hobby,40,stdin);
 fgets(f.hobby,40,stdin);
 change(p->hobby);
 
 fseek(fp, 0, SEEK_END);
 fwrite(&f,sizeof(Student),1,fp);
 
 fseek(fp,0,SEEK_SET);
 
 number++;
 
 fwrite(&number,sizeof(int),1,fp);
 
  break;

  default:
  break;
  }
  }
  fclose(fp);
  return 0;
}
