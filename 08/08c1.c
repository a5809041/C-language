#include <stdio.h>

char *month_name(int n){

static char *months[] = {"January","February","March",
                          "April","May","June",
                          "July","August","September",
                           "October","November","December",
                            "unknown month"};
    if(n>12||n<=0)n=13;
 return months[n-1];
}

int main(void){
int m;
  while(scanf("%d",&m)!=EOF){
  printf("%s\n",month_name(m));
  }
return 0;
}
