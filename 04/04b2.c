#include <stdio.h>
int main(void){
char word[]="Aoyama Gakuin University",a;
int b;
long c;
float d;
double e;
  scanf("%c",&a);
  scanf("%d",&b);
  scanf("%ld",&c);
  scanf("%f",&d);
  scanf("%lf",&e);
  printf("%c\n%3d\n",a,a);
  printf("%3d\n%4d\n%5d\n%c\n",b,b,b,b);
  printf("%12ld\n",c);
  printf("%10.4f\n%6.2f\n%6.3f\n",d,d,d);
  printf("%27.12f\n%20.10e\n",e,e);
  printf("%20s\n%-30s\n%30s\n",word,word,word);
return 0;
}
