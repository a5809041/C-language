#include <stdio.h>
#include <string.h>

int main(){
FILE *fin,*fout;
int key,fake,n=0,check,dummy,count=1;
char in[100],out[100],j[500];
printf("鍵: ");
check=scanf("%d",&key);
fake=getchar();
if(check==0)dummy=getchar();

printf("入力ファイル名: ");
fgets(in,sizeof(in),stdin);
in[strlen(in)-1]='\0';
if (!(fin=fopen(in,"rb"))) {
    fprintf (stderr, "Cannot open file myfile.txt for writing.\n");
    return(1);
}
printf("出力ファイル名: ");
fgets(out,sizeof(out),stdin);
out[strlen(out)-1]='\0';
if (!(fout=fopen(out,"wb"))) {
    fprintf (stderr, "Cannot open file myfile.txt for writing.\n");
    return(1);
}
fread(&j,sizeof(char),sizeof(j),fin);



if(check==0){

    //fgets(j,sizeof(j),stdin);

    //fake=fake%256;
    while(j[n]!='\0'){
      //printf("%d ",(fake^j[n])%256);
      j[n]=j[n]^fake;
      n++;
      count++;
    }
}
else{
//fgets(j,sizeof(j),stdin);

    while(j[n]!='\0'){
      //printf("%c",i+j[n]);
      j[n]=key+j[n];
      n++;
      count++;
    }
}
fwrite(&j,sizeof(char),341,fout);

fclose(fin);
fclose(fout);

return 0;
}

