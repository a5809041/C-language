#include <stdio.h>
int josephus(int n){
if(n<=1)
  return 1;
else if((n%2)==0)
  return 2*josephus(n/2)-1;
else
  return 2*josephus(n/2)+1;
}

int main(void){
int a;
  while((scanf("%d",&a))==1){
  printf("%d\n",josephus(a));
  }
return 0;
}
