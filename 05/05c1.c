#include <stdio.h>
#include <math.h>
long between(int n,int a,int b){
return (n/pow(10,b-1))%pow(10,b-a+1);
}

long number(int n){
return pow(10,n);
}

long point(int n,int,a){
return (n/pow(10,a-1))%10;
}

long year(int n){

  if(((between(n,5,4))%number(2))>64)
  return 1900+((between(n,5,4))%number(2));
  
  else if(((between(n,5,4))%number(2))<10)
  return 2000+((between(n,5,4))%number(2));
  
  else
  return 2000+((between(n,5,4))%number(2));
  
  }

char* course(point(n,6)){
  switch(point(n,6)%number(1)){
  case 1: 
  return "物理・数理学科 ";
  break;
  case 2:
  return "化学・生命科学科 ";
  break;
  case 3:
  return "機械工学科 ";
  break;
  case 4:
  return "電気電子工学科 ";
  break;
  case 5:
  return "経営工学科 ";
  break;
  case 6:
  return "機械創造工学科 ";
  break;
  case 7:
  return "経営システム工学科 ";
  break;
  case 8:
  return "情報テクノロジー学科 ";
  break;
  case 9:
  return "聴講生 ";
  break;
  }
}

long daihyou(int input()){
if(a<10000000){
    return "学生番号エラー (桁数が足りない)\n";
    }
else if(a>99999999){
  return "学生番号エラー (桁数が多すぎる)\n";
  }
else if(a%15000000<100000){
  return "学生番号エラー (3桁目が0のため）\n";
  }
else if(a<15000000||a>16000000){
  return "理工学部の学生ではありません\n";
  }
 return 1;
}

int input(){
scanf("%d",&n);
return n;
}

int main(void){
int a;
while(input()!=0){
if((daihyou(a))!=1){
printf("%s",daihyou(a))
}
else{
printf("%s",course(a));
printf("%d 年度入学の学生\n",year(a));
}
}
return 0;
}
