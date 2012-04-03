#include <stdio.h>

int main(void){
    char a[9]="ADINSXbf", *p;

    p=&a[4];
    printf("Address of a[4]: %p\n", &a[4]); // Address of a[4]: ________
    printf("Address of p: %p\n", &p); // Address of p: ________
    printf("Value of p: %p\n", p); // Value of p: ________
    printf("Value of *p: %c\n", *p); // Value of *p: ________

    p++;
    printf("Address of p after p++: %p\n", &p); // Address of p: ________
    printf("Value of p after p++: %p\n", p); // Value of p: ________
    printf("Value of *p after p++: %c\n", *p); // Value of *p: ________
    printf("Value of a[5] after p++: %c\n", a[5]); // Value of a[5]: ________

    (*p)++;
    printf("Address of p after (*p)++: %p\n", &p); // Address of p: ________
    printf("Value of p after (*p)++: %p\n", p); // Value of p: ________
    printf("Value of *p after (*p)++: %c\n", *p); // Value of *p: ________
    printf("Value of a[5] after (*p)++: %c\n", a[5]); // Value of a[5]: ________

    return(0);
}
