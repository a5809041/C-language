#include <stdio.h>

long num(int a){
int n,result=1;
for(n=a;n>=0;n--){
result=result*10;
}
return result;
}

int input(){
  int n;
  scanf("%d",&n);
  return n;
}

long single(int n,int a){
return (n/num(a-1))%10;
}

long plural(int n,int a,int b){
return (n/num(b-1))%num(a-b+1);
}

int errcheck(int a){
if(a<10000000)
  return (int)"学生番号エラー (桁数が足りない)\n";
else if(a>99999999)
  return (int)"学生番号エラー (桁数が多すぎる)\n";
else if(a%15000000<100000)
  return (int)"学生番号エラー (3桁目が0のため）\n";  
else if(a<15000000||a>16000000)
  return (int)"理工学部の学生ではありません\n";
else 
  return 1;
}

char* course(int n){

switch(single(n,6)){
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
  default:
  return "エラーです";
  break;
  }
}

long year(int n){
int b=plural(n,5,4);
  if(b>64)
    return 1990+b;
  else
    return 2000+b;
}

int main(){;
while(errcheck(input())==1){
 
  printf("%c",course(input()));
  printf("%ld 年度入学の学生\n",year(input()));
 
}
printf("%s",errcheck(input()));
return 0;
}
