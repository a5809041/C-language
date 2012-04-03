#include <stdio.h>
#define NMAX 10

int main(void) {
    int data1[NMAX];
    int data2[NMAX], i, cnt = 0;
    int *p1, *p2;

    p1 = data1;
    p2 = data2;

    for (i=0; i<NMAX; i++)
        scanf("%d", data1+i);

    for (i=0; i<NMAX; i++) {
        if ((*p1 % 2)!=0) {
            *p2=*p1;
            p2++;
            cnt++;
        }
        p1++;
    }

    p2 = data2;

    for (i=0; i<cnt; i++) {
        printf("%d\n", *p2);
        p2++;
    }

    return 0;
}
