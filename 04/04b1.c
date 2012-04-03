#include <stdio.h>
int main(void)
{
int a;
  while((a=getchar())!=EOF)
  {
    if(a>=65&&a<=90){
    a+=32;
    }
    else if(a>=97&&a<=122){
    a-=32;
    }
    putchar(a);
    }
return 0;
}
