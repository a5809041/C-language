#include <stdio.h>
int main(){
int a,b,c=0;
scanf("%d %d",&a,&b);
  while(a!=0){
    if(a&1==1){
        c=sum(b,c);
    }
    a=a>>1;
    b=b<<1;
    }
printf("%d\n",c);
return(0);
}

int sum(int a, int b){
int carry,sum;
  sum=a^b;
  carry=a&b;
  while(b!=0){
  a=sum;
  b=carry<<1;
  sum=a^b;
  carry=a&b;
  }
  return(sum);
}
  