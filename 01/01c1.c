#include <stdio.h>
int main (void) {
    int i, j;
    for (i=1; i<10; i++) {
        for (j=1; j<10; j++) {
            printf("%4d", i * j);
        }
        printf("\t");
    }
   return 0;
}
