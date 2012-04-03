#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_DEPRECATE 1

typedef struct
{
 int year;
 short month;
 short day;
}Date;

typedef struct
{
 char name[40];
 char university[40];
 char department[40];
 Date birthday;
 char hobby[40];
}Student;

void convert (char *a)
{
 char *sp;
 int n;
 if((sp=strstr(a,"\n"))!=NULL)
 {
 *sp='\0';
 sp++;
 for(n=strlen(a);n<39;n++)
 {
  *sp='\0';
  sp++;
  }
 }
}

int main(void)
{
 FILE *fp;
 Student data[100],f,*p;
 int i=0,a,number,ch;
 size_t n;
 fp=fopen("bininfo","rb+");
 fread(&number,sizeof(int),1,fp);
 printf("Next choice, please: ");
 scanf("%d",&a);
 while(a>0 && a<=3)
 {
  while((ch=fgetc(stdin))!='\n') {};
  if(a==1)
 {
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
 }
 if(a==2)
 {
 fseek(fp,0,SEEK_SET);
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
 }
 if(a==3)
 {
 fseek(fp, 0, SEEK_END);
 p=&f;
 
 printf("Input next student, please:\nName:\n");
 fgets(f.name,40,stdin);
 convert(p->name);
 
 printf("University:\n");
 fgets(f.university,40,stdin);
 convert(p->university);
 
 printf("Department:\n");
 fgets(f.department,40,stdin);
 convert(p->department);
 
 printf("Birthday:\n");
 
 scanf("%d/%hd/%hd",&f.birthday.year,&f.birthday.month,&f.birthday.day);
 
 printf("Hobby:\n");
 fgets(f.hobby,40,stdin);
 fgets(f.hobby,40,stdin);
 convert(p->hobby);
 
 fseek(fp, 0, SEEK_END);
 fwrite(&f,sizeof(Student),1,fp);
 
 fseek(fp,0,SEEK_SET);
 
 number++;
 
 fwrite(&number,sizeof(int),1,fp);
 }
 
 printf("Next choice, please: ");
  scanf("%d",&a);
 }
 fclose(fp);
 return 0;
}
 
 

