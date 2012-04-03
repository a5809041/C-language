#include <stdio.h>

int main(){
int a,b,carry,sum;
  scanf("%d %d",&a,&b);
  sum=a^b;
  carry=a&b;
  while(b!=0){
  a=sum;
  b=carry<<1;
  sum=a^b;
  carry=a&b;
  }
  printf("%d\n",sum);
  return(0);
  }
  