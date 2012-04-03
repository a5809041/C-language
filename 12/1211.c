#include <stdio.h>


typedef struct{
  int x; 
  int y;
}position;

int main (void) {
  int n,i,t,xa, xb, ya, yb,check;
  char d;
  position place[200];

 
    check=scanf("%d", &n);
    if(check==0)return 0;
    
    xa = 0; xb = 0;
    ya = 0; yb = 0;
    place[0].x = 0; place[0].y = 0;
    for (i = 1; i < n; i++) {
      scanf("%d %c", &t, &d);
      switch(d){
      case 'W':
      place[i].x = place[t].x - 1;
      break;
      
      case 'S':
      place[i].y = place[t].y + 1;
      break;
      
      case 'E':
      place[i].x = place[t].x + 1;
      break;
      
      case 'N':
      place[i].y = place[t].y - 1;
      break;
      
      }
      
      if(place[i].x<xa)xa=place[i].x;
      if(place[i].x>xb)xb=place[i].x;
      if(place[i].y<ya)ya=place[i].y;
      if(place[i].y>yb)yb=place[i].y;
    }
    printf("%d %d", xb - xa + 1, yb - ya + 1);
  

  return 0;
}
