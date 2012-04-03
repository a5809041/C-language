#include <stdio.h>
#include <math.h>
int main(){
 int a,b;
 for(a=2;a<=20;a++){
   b=pow(2,a);  
  if((b-2)%a==0){
   printf("%2d is a prime number.",a);
    printf("\n");
    }
   else{
   printf("%2d is not a prime number.",a);
   printf("\n");
       }
  }
return(0);
}
   