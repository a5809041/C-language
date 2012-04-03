#include <stdio.h>
int main(void)
{
int a;

    while((a=getchar())!=EOF)
    {
      switch(a){
      case '<':
        printf("&lt;");
        break;
      case '>':
        printf("&gt;");
        break;
      case '&':
        printf("&amp;");
        break;
      case '"':
        printf("&quot;");
        break;
      case '\'':
        printf("&apos;");
        break;
      default:
        putchar(a);
      }
    }
return 0;
}
