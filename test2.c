#include <stdio.h>
#include <string.h>

int main(){
FILE *fin,*fout;
char in[100],out[100],test[50],temp;
int i;

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

fread(&test,sizeof(char),10,fin);


fwrite(&test,sizeof(char),10,fout);

fclose(fin);
fclose(fout);

return 0;
}
