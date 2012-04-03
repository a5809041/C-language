#include <stdio.h>

int main(void){
    int a[9] = { 65, 68, 70, 73, 76, 79, 82, 85, 88 }, *p;

    p = &a[4];
    printf("Address of a[4]: %p\n", &a[4]); // Address of a[4]: ________
    printf("Address of p: %p\n", &p); // Address of p: ________
    printf("Value of p: %p\n", p); // Value of p: ________
    printf("Value of *p: %d\n", *p); // Value of *p: ________

    p++;
    printf("Address of p after p++: %p\n", &p); // Address of p: ________
    printf("Value of *p after p++: %d\n", *p); // Value of *p: ________

    ++p;
    printf("Address of p after ++p: %p\n", &p); // Address of p: ________
    printf("Value of *p after ++p: %d\n", *p); // Value of *p: ________

    p = &a[0];
    printf("Value of *(p+1): %d\n", *(p+1)); // Value of *(p+1): ________
    printf("Value of *(a+1): %d\n", *(a+1)); // Value of *(a+1): ________
    printf("Value of *(p+2): %d\n", *(p+2)); // Value of *(p+2): ________
    printf("Value of *(a+2): %d\n", *(a+2)); // Value of *(a+2): ________

    return(0);
}
