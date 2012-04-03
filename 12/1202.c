#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int n,t=1,wait;
double x ;
 //srand((unsigned)time(NULL))  ;

scanf("%d",&wait);

for(n=1;n<=100;n++){
    while(!((x=(double)rand()/RAND_MAX)<1.0/wait)){
      t++;
    }
  printf("%d  ",t);
  if((n%10)==0)printf("\n");
  t=1;
}
return 0;
}
