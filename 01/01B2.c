#include <stdio.h>
#include <math.h>
int main(void){
double a,b;
for(a=1;a<=10;a++){
b=pow(1.7320508,a);
printf(" %6.2lf",b);
printf("\n");
}
return(0);
}
