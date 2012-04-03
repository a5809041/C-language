#include <stdio.h>

int main(){
int i,fake,n=0,check,dummy;
char j[100];
printf("input key");
check=scanf("%d",&i);
fake=getchar();

if(check==0){
    dummy=getchar();
    fgets(j,sizeof(j),stdin);

    fake=fake%256;
    while(j[n]!='\n'){
      printf("%d ",(fake^j[n])%256);
      n++;
    }
}
else{
fgets(j,sizeof(j),stdin);

    while(j[n]!='\n'){
      printf("%c",i+j[n]);
      n++;
    }
}
return 0;
}

