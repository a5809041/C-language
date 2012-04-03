#include <stdio.h>

typedef struct{
double real;
double imm;
} complex;

int decision_sum(double a,double b,double c,double d){
double n;
n=b+d;
if(n==0){
	printf("(%.2lf%+.2lfi) + (%.2lf%+.2lfi) = (%.2lf)\n",a,b,c,d,a+c);
  return 0;
  }
  else{
	  printf("(%.2lf%+.2lfi) + (%.2lf%+.2lfi) = (%.2lf%+.2lfi)\n",a,b,c,d,a+c,n);
  }
  return 0;
}

int decision_different(double a,double b,double c,double d){
double n;
n=b-d;
if(n==0){
	printf("(%.2lf%+.2lfi) - (%.2lf%+.2lfi) = (%.2lf)\n",a,b,c,d,a-c);
  return 0;
  }
  else{
	  printf("(%.2lf%+.2lfi) - (%.2lf%+.2lfi) = (%.2lf%+.2lfi)\n",a,b,c,d,a-c,n);
  }
  return 0;
}

int decision_product(double a,double b,double c,double d){
double n;
n=a*d+b*c;
if(n==0){
	printf("(%.2lf%+.2lfi) * (%.2lf%+.2lfi) = (%.2lf)\n",a,b,c,d,a*c-b*d);
  return 0;
  }
  else{
	  printf("(%.2lf%+.2lfi) * (%.2lf%+.2lfi) = (%.2lf%+.2lfi)\n",a,b,c,d,a*c-b*d,n);
  }
  return 0;
}


int main(void){
  complex first;
  complex second;
  double sum_real,sum_imm,diff_real,diff_imm,product_real,product_imm;
  
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
  
  decision_sum(first.real,first.imm,second.real,second.imm);
  decision_different(first.real,first.imm,second.real,second.imm);
  decision_product(first.real,first.imm,second.real,second.imm);
  
  return 0;
}
