#include <stdio.h>
#include <string.h>
typedef struct{
char name[40];
int number;
} hobby;

int main(void){
  hobby data[10];
  int i,n,a,b,c,count=0,length;
  printf("Please input Students' hobbies:\n");
  
  for(i=1; i<=10;i++){
    printf("Hobby %d:",i);
    if((fgets(data[i-1].name, 40, stdin))==NULL){
    break;
    }
    printf("Number of students for hobby %d: ",i);
    scanf("%d", &data[i-1].number);
    getchar();
    if(data[i-1].number>20){
    data[i-1].number=20;
    break;
    }
    count++;
    if(length<strlen(data[i-1].name)){
    length=strlen(data[i-1].name);
    }
  }
  
  
  
  printf("Students' hobbies:\n");
  for(n=1;n<=count;n++){
  c=strlen(data[n-1].name);
  data[n-1].name[c-1] = ':';
  printf("%s",data[n-1].name);
    for(a=1;a<=((length+1)-strlen(data[n-1].name));a++){
    printf(" ");
    }
  for(b=1;b<=data[n-1].number;b++){
  printf("*");
  }
  printf("\n");
  }
return 0;
}
