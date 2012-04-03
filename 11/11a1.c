#include <stdio.h>

int main(void)
{
  char buf[100];
  FILE *fp;
  int i;
    
    if (!(fp=fopen("myinfo.txt","w"))) {
    fprintf (stderr, "Cannot open file myfile.txt for writing.\n");
    return 1;
    }
    
    printf("Your name, please:\n");
    fgets(buf,sizeof(buf),stdin);
    fprintf(fp,"%s",buf);
    printf("Your student number, please:\n");
    fgets(buf,sizeof(buf),stdin);
    fprintf(fp,"%s",buf);
    printf("Your age, please:\n");
    fgets(buf,sizeof(buf),stdin);
    fprintf(fp,"%s",buf);
    printf("Your e-mail address, please:\n");
    fgets(buf,sizeof(buf),stdin);
    fprintf(fp,"%s",buf);
fclose(fp);
return 0;
}
