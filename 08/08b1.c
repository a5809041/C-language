#include <stdio.h>
#include <ctype.h>

int countUpperCase(char *a)
{
  int count=0;
  while(*a!='\0'){
    if(isupper(*a)){
    count++;
    }
    a++;
  }
  return count;
}

int main(void){
  char a[100];
  
  while(fgets(a,sizeof(a),stdin)!=NULL){
    printf("%d\n",countUpperCase(a));
  }
return 0;
}
