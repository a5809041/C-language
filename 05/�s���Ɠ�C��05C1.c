#include <stdio.h>
#include <math.h>

int num(int n,int studentNo)
{
  int resultA,resultB;
  resultA=studentNo/pow(10,n-1);
  resultB=resultA%10;
  return(resultB);
}

int errcheck(int studentNo)
{
  if(studentNo<10000000){
  printf("学生番号エラー　（桁数が足りない）");
  return(0);
  }
  else if(studentNo>99999999){
  printf("学生番号エラー　（桁数が多すぎる）");
  return(0);
  }
  else if((num(6,studentNo))==0)
  {
  printf("学生番号エラー　（3桁目が0のため）");
  return(0);
  }
  else if((num(8,studentNo))*10+(num(7,studentNo))!=15){
  printf("理工学部の学生ではありません\n");
  return(0);
  }
 return(1);
}

int year(int n)
{
  if(n>=65)
  {
  printf("19%d 年度入学の学生\n",n);
  }
  else
  {
  printf("20%02d 年度入学の学生\n",n);
  }
 return(0);
}

int course(int a)
{
switch(a){
  case 1:printf("物理・数理学科　");break;
  case 2:printf("化学・生命科学科　");break;
  case 3:printf("機械工学科　");break;
  case 4:printf("電気電子工学科　");break;
  case 5:printf("経営工学科　");break;
  case 6:printf("機械創造工学科　");break;
  case 7:printf("経営システム工学科　");break;
  case 8:printf("情報テクノロジー学科　");break;
  case 9:printf("聴講生");break;
  }
 return(0);
}

int main(void)
{
int studentNo;
  while((scanf("%d",&studentNo))==1){
  if(errcheck(studentNo)==1);
  {
  course(num(6,studentNo));
  year(num(5,studentNo)*10+num(4,studentNo));
  }
 }
 return(0);
}
