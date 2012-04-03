#include <stdio.h>

int character(){
char buffer[100];
if(fgets(buffer,sizeof(buffer),stdin)==NULL)
  return 0;
else
  character();
  printf("%s",buffer);
  return 0;
}

int main(void){
character();
return 0;
}
