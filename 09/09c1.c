#include <stdio.h>
#include <stdlib.h>


 char *getline(void){
  char *array;
  int asize = 100;
 if (!(array = (char *) malloc(sizeof(char)*asize)))
    printf("Not enough memory!\n"), exit(1);
 return fgets(array,100,stdin);

 }


int main(void){
char *line[100];
int i,k;
for(i=0;i<100&&(line[i]=getline());i++);
i--;
for(k=i;k>=0;k--)printf("%s",line[k]);


return 0;
}
