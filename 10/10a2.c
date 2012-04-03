#include <stdio.h>

void swap (int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp; 
}

int main (void)
{
    int a = 1, b = 2;
    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b); /* expected output: a = 2, b = 1 */
}
