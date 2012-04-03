#include <stdio.h>
#include <math.h>
int main(void){
double a,b;
for(a=0;a<=100;a++){
b=sqrt(a)*10;
printf("%3.0lf points -> %5.1lf points",a,b);
printf("\n");
}
return(0);
}



