#include <stdio.h>
int main(void){
int a,sum=0;
for(a=1;a<=30;a=a+2){
      sum=sum+a;
    printf("The sum of odd numbers up to %d is %d.",a,sum);
    printf("\n");
    }
  return 0;
}
