#include <stdio.h>

#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)

typedef struct position {
  int x, y;
}posi;

int main () {
  int n;
  int count;
  int t, d;
  int x0, x1, y0, y1;
  posi map[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
  posi posi[200];

  do {
    scanf ("%d", &n);
    if (!n) 
     { 
      break; 
     }
    x0 = 0; x1 = 0;
    y0 = 0; y1 = 0;
    posi[0].x = 0; posi[0].y = 0;
    for (count = 1; count < n; count++) {
      scanf("%d %d", &t, &d);
      posi[count].x = posi[t].x + map[d].x;
      posi[count].y = posi[t].y + map[d].y;
      x0 = min(posi[count].x, x0);
      x1 = max(posi[count].x, x1);
      y0 = min(posi[count].y, y0);
      y1 = max(posi[count].y, y1);
    }
    printf("%d %d\n", x1 - x0 + 1, y1 - y0 + 1);
  } while(1);

  return 0;
}
