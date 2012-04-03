#include <stdio.h>

typedef struct{
double real;
double imm;
} complex;

int main(void){
  complex first;
  complex second;
  double sumReal,sumImm;
  
  printf("計算する複素数を入力して下さい。\nはじめの複素数\n");
  printf("実数部＝");
  scanf("%lf",&first.real);
  printf("虚数部＝");
  scanf("%lf",&first.imm);
  
  printf("次の複素数\n");
  printf("実数部＝");
  scanf("%lf",&second.real);
  printf("虚数部＝");
  scanf("%lf",&second.imm);
  
  sumReal=first.real+second.real;
  sumImm=first.imm+second.imm;
  
  if(first.imm<0){
  printf("(%3.2lf%3.2lfi) ",first.real,first.imm);
  }
  else{
  printf("(%3.2lf+%3.2lfi) ",first.real,first.imm);
  }
  if(second.imm<0){
  printf("+ (%3.2lf%3.2lfi) = ",second.real,second.imm);
  }
  else{
  printf("+ (%3.2lf+%3.2lfi) = ",second.real,second.imm);
  }
  if(sumImm<0){
  printf("(%3.2lf%3.2lfi)\n",sumReal,sumImm);
  }
  else{
  printf("(%3.2lf+%3.2lfi)\n",sumReal,sumImm);
  }
return 0;
}
