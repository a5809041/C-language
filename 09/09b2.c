#include <stdio.h>

typedef struct {
    int english;
    int math;
} student;

int main(void) {
    int  english_total=0, math_total=0;
    student marks[10] = {
        {45, 69},
        {68, 80},
        {57, 75},
        {35, 50},
        {60, 71},
        {80, 74},
        {78, 80},
        {32, 46},
        {48, 56},
        {100, 100}
    };
    student *p=marks, *endp=marks+10;
    printf("英語\t数学\t平均\n");

    while(p!=endp) {
        printf("%3d\t%3d\t%5.1f\n",
            p->english, p->math,
            (p->english+p->math)/2.0 ); p++;
    }
    p=marks;
    while(p!=endp) {
        english_total += p->english;
        math_total += p->math;p++;
    }

    printf("%5.1f\t%5.1f\t%5.1f\n",
        english_total/10.0, math_total/10.0,
        (english_total+math_total) / 20.0);

    return 0;
}
