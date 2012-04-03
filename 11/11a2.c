#include <stdio.h>

int main(void)
{
FILE *fp;
char buf[100];
int n;


if (!(fp=fopen("myinfo.txt","r"))) {
    fprintf (stderr, "Cannot open file myfile.txt for writing.\n");
    return 1;
}

  fgets(buf,sizeof(buf),fp);
  printf("My name: %s",buf);
  fscanf(fp,"%d",&n);
  printf("My student number: %d\n",n);
  fscanf(fp,"%d",&n);
  printf("My age: %d\n",n);
  fgets(buf,sizeof(buf),fp);
  fgets(buf,sizeof(buf),fp);
  printf("My e-mail address: %s",buf);
fclose(fp);
return 0;
}
