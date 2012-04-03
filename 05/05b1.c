#include <stdio.h>
long fuctorial(int n){
  if(n==0)
    return 1;
  else
    return n*fuctorial(n-1);
}
long combination(int n,int r){
int a;
  a=fuctorial(n)/(fuctorial(r)*fuctorial(n-r));
  return a;
}

int main(void){
int a,loopa,loopb;
scanf("%d",&a);
  for(loopa=0;loopa<=a;loopa++){
    for(loopb=0;loopb<=loopa;loopb++){
    printf(" %3ld",combination(loopa,loopb));
    }
    printf("\n");
  }
return 0;
}
