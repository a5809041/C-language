#include <stdio.h>
int main(void){
int a,b,c,d,e,f;
while((a=getchar())!=EOF){
  switch(a){
  case '&':
    switch(b=getchar()){
    case 'l':
      switch(c=getchar()){
      case 't':
        switch(d=getchar()){
        case ';':
        printf("<");
        break;
        default:
        putchar(a);
		putchar(b);
		putchar(c);
		putchar(d);
        break;
        }
      break;
      default:
      putchar(a);
	  putchar(b);
	  putchar(c);
      break;
      }
    break;
    case 'g':
      switch(c=getchar()){
      case 't':
        switch(d=getchar()){
        case ';':
        printf(">");
        break;
        default:
        putchar(a);
		putchar(b);
		putchar(c);
		putchar(d);
        break;
        }
      break;
      default:
      putchar(a);
	  putchar(b);
	  putchar(c);
      break;
      }
    break;
    case 'a':
      switch(c=getchar()){
      case 'm':
        switch(d=getchar()){
        case 'p':
          switch(e=getchar()){
          case ';':
		  printf("&");
          break;
          default:
          putchar(a);
		  putchar(b);
		  putchar(c);
		  putchar(d);
		  putchar(e);
          break;
          }
        break;
        default:
        putchar(a);
		putchar(b);
		putchar(c);
		putchar(d);
        break;
        }
      break;
      case 'p':
        switch(d=getchar()){
        case 'o':
          switch(e=getchar()){
          case 's':
            switch(f=getchar()){
            case ';':
            printf("\'");
            break;
            default:
            putchar(a);
			putchar(b);
			putchar(c);
			putchar(d);
			putchar(e);
			putchar(f);
            break;
            }
          break;
          default:
          putchar(a);
		  putchar(b);
		  putchar(c);
		  putchar(d);
		  putchar(e);
          break;
          }
        break;
        default:
        putchar(a);
		putchar(b);
		putchar(c);
		putchar(d);
        break;
        }
      break;
      default:
      putchar(a);
	  putchar(b);
	  putchar(c);
      break;
      }
    break;
    case 'q':
      switch(c=getchar()){
      case 'u':
        switch(d=getchar()){
        case 'o':
          switch(e=getchar()){
          case 't':
            switch(f=getchar()){
            case ';':
            printf("\"");
            break;
            default:
            putchar(a);
			putchar(b);
			putchar(c);
			putchar(d);
			putchar(e);
			putchar(f);
            break;
            }
          break;
          default:
          putchar(a);
		  putchar(b);
		  putchar(c);
		  putchar(d);
		  putchar(e);
          break;
          }
        break;
        default:
        putchar(a);
		putchar(b);
		putchar(c);
		putchar(d);
        break;
        }
      break;
      default:
      putchar(a);
	  putchar(b);
	  putchar(c);
      break;
      }
    break;
    default:
    putchar(a);
	putchar(b);
    break;
    }
  break;
  default:
  putchar(a);
  break;
  }
}
return 0;
}
