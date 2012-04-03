#include <stdio.h>
#include <math.h>

typedef struct{
double x;
double y;
} point;

int main(void){
  point start;
  point end;
  double lx,ly;
  
  printf("始点座標 (x y): ");
  scanf("%lf %lf",&start.x,&start.y);
  printf("終点座標 (x y): ");
  scanf("%lf %lf",&end.x,&end.y);
  
  lx=start.x-end.x;
  ly=start.y-end.y;
  
  printf("距離 = %3.2lf\n",sqrt(pow(lx,2)+pow(ly,2)));
return 0;
}
