#include <stdio.h>
#include <stdlib.h>


char *getline(void){
  char *array,*temp;
  char c;
  int count1=0,count2=2;
  if (!(array = (char *) malloc(sizeof(char)*100)))
    printf("Not enough memory!\n"), exit(1);
    while(1){
      if((c=getchar()) == EOF) return NULL;
      array[count1] = c;
      if((count1 % 100) == 0){
        temp=(char *)realloc(array,sizeof(char)*(100*count2));
        if(temp == NULL){
          printf("Not enough memory!\n"), exit(1);
        }
        else{
          array = temp;
        }
        count2++;
      }
      if(array[count1] == '\n'){
        break;
      }
      count1++;
    }
    array =(char *)realloc(array,sizeof(char)*(100*count2-(100-count2)));
    return array;
    free(array);
  }

int main(void){
  char *line[100];
  int i,k;
    
    for(i=0;i<100&&(line[i]=getline());i++);
    i--;
    for(k=i;k>=0;k--)printf("%s",line[k]);
    
return 0;
}

