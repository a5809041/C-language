#include <stdio.h>

typedef struct {
int year;
int month;
int day;
} Today;

int main(void){
int y,m,d;
Today today1={y,m,d};

  printf("日付を入力して下さい:\n");
  
  printf("年:");
  scanf("%d",&y);
  
  printf("月:");
  scanf("%d",&m);
  
  printf("日:");
  scanf("%d",&d);
 today1.year=y;
 today1.month=m;
 today1.day=d;
printf("%d年%d月%d日です\n",today1.year,today1.month,today1.day);
return 0;
}
