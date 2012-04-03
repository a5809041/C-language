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
{ int i,n;
  FILE *fp;
  Student data[5];
  
  
  if (!(fp=fopen("bininfo","rb+"))) {
      fprintf (stderr, "Cannot open file bininfo.txt for writing.\n");
      return 1;
  }
  for(i=0;i<5;i++){
  printf("Input next student, please:\n");
  
  printf("Name:");
  if((fgets(data[i].name,sizeof(data[i].name),stdin))==NULL)break;
  change(data[i].name);
  
  
  printf("University:");
  if((fgets(data[i].university,sizeof(data[i].university),stdin))==NULL)break;
  change(data[i].university);
  
  
  printf("Department:");
  if((fgets(data[i].department,sizeof(data[i].department),stdin))==NULL)break;
  change(data[i].department);
  
  
  printf("Birthday:");
  scanf("%d/%hd/%hd",&data[i].birthday.year,&data[i].birthday.month,&data[i].birthday.day);
  getchar();
  
  printf("Hobby:");
  if((fgets(data[i].hobby,sizeof(data[i].hobby),stdin))==NULL)break;
  change(data[i].hobby);
  
  }
  fwrite(&i,sizeof(int),1,fp);
  for(n=0;n<i;n++)fwrite(&data[n], sizeof(data[n]), 1, fp);
  
fclose(fp);
return 0;
}
