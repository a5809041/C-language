#include <stdio.h>
int main(){
  int a;
  //printf("西暦を入力してください: ");
  scanf("%4d",&a);
  if(a>=1926&&a<=1988){
    switch(a){
      case 1926:
      printf("昭和元年です。\n");
      break;
      default:
      printf("昭和 %d 年です。\n",a-1925);
      break;
      }
  }
  else if(a>=1989&&a<=2010){
    switch(a){
      case 1989:
      printf("平成元年です。\n");
      break;
      default:
      printf("平成 %d 年です。\n",a-1988);
      break;
    }
  }
  else{
      printf("入力は 1926 と 2010 の間にしてください。\n");
  }
  return(0);
}
