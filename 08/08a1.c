#include <stdio.h>

int main(void){
    char xc = 'A', *pc;
    int xi=65, *pi;
    double xd=65.0, *pd;
    float xf=65.0, *pf;
    pc = &xc;
    printf("Address of xc: %p\n", &xc);
    printf("Value of pc: %p\n", pc);
    printf("Address of pc: %p\n", &pc);
    printf("Value referenced by pc: %c\n", *pc);
    
    pi = &xi;
    printf("Address of xi: %p\n", &xi);
    printf("Value of pi: %p\n", pi);
    printf("Address of pi: %p\n", &pi);
    printf("Value referenced by pi: %d\n", *pi);
    
    pd = &xd;
    printf("Address of xd: %p\n", &xd);
    printf("Value of pd: %p\n", pd);
    printf("Address of pd: %p\n", &pd);
    printf("Value referenced by pd: %lf\n", *pd);
    
    pf = &xf;
    printf("Address of xf: %p\n", &xf);
    printf("Value of pf: %p\n", pf);
    printf("Address of pf: %p\n", &pf);
    printf("Value referenced by pf: %f\n", *pf);
    return(0);
}
