#include <stdio.h>
#include <math.h>

class Point {
    double x;
    double y;
public:
    Point(const char *prompt); // construct Point from input
    double distance(Point other);
};

Point::Point(const char *prompt)
{
    printf("%s", prompt);
    scanf("%lf %lf", &x, &y);
}

double Point::distance(Point other)
{
    return sqrt((x-other.x)*(x-other.x) + (y-other.y)*(y-other.y));
}

int main(void){

  char s[20]="始点座標 (x y):",e[20]="終点座標 (x y):";
  Point start(s);
  Point end(e);

  printf("距離 = %.2lf",start.distance(end));
  
  return 0;
}
