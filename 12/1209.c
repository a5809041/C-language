#include <stdio.h>

int main(){
int data[100],i=0,check=1,n,j,a=0,stack[26]={'Z'},stackno=0;
  
  while(i<100){
    data[i]=getchar();
    if(data[i]=='\n' || data[i]==EOF) break;
    i++;
  }
  
  for(n=0;n<i;n++){
    a=0;
    for(j=0;j<stackno;j++){
      if(stack[j]>=data[n]){
        stack[j]=data[n];
        a=1;
        break;
      }
    }
    if(a==0){stackno++;stack[j]=data[n];}
  }
  //for(i=0;i<stackno;i++)printf("%d, ",stack[i]);
  printf("%d\n",stackno);
return 0;
}
