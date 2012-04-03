#include <stdio.h>
long fuctorial(int n){
  if(n==0)
    return 1;
  else
    return n*fuctorial(n-1);
}

int main(void){
int a;
scanf("%d",&a);
printf("%d! = %d\n",a,fuctorial(a));
return 0;
}
