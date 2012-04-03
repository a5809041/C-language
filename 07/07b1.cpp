#include <stdio.h>

class Date{
  int y;
  int m;
  int d;
public:
  void set_year(int year);
  void set_month(int month);
  void set_day(int day);
  void print();
};

void Date::set_year(int year){
  y=year;
}

void Date::set_month(int month){
  m=month;
}

void Date::set_day(int day){
  d=day;
}

void Date::print()
{
  printf("%d年%d月%d日です\n",y,m,d);
}

int main(void)
{
    Date someday;
    int input;

    printf("日付を入力して下さい:\n");
    printf("年: ");
    scanf("%d", &input);
    someday.set_year(input);
    
    printf("月: ");
    scanf("%d", &input);
    someday.set_month(input);
    
    printf("日: ");
    scanf("%d", &input);
    someday.set_day(input);
    
    someday.print();

    return 0;
}
