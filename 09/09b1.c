#include <stdio.h>
#include <stdlib.h>

int globalVar = 10;

long factorial (int recParaVar)
{
    long recLocalVar;
    static int recStaticVar = 0;
    int *recDynamicVar = (int *)malloc(sizeof(int));

    printf("Calculating factorial of %d\n", recParaVar);
    printf("Address of recursive parameter variable (rpv%d): %p\n",
        recParaVar, &recParaVar);
    printf("Address of recursive local variable (rlv%d): %p\n",
        recParaVar,  &recLocalVar);
    printf("Address of static variable used in recursion (rsv%d): %p\n",
        recParaVar,  &recStaticVar);
    printf("Address of memory allocated by malloc in recursion (rdvm%d): %p\n",
        recParaVar, recDynamicVar);
    recStaticVar++;
    if (recParaVar <= 1)
        recLocalVar = 1;
    else
        recLocalVar = recParaVar * factorial(recParaVar - 1);
    return recLocalVar;
}

void function (int parameterVar)
{
    int localVar = 30;
    static int staticVar = 40;
    int *dynamicVar = (int *)malloc(sizeof(int));

    *dynamicVar = 50;

    printf("Address of global variable (gv): %p\n", &globalVar);
    printf("Address of local variable (lv): %p\n", &localVar);
    printf("Address of static variable (sv): %p\n", &staticVar);
    printf("Address of parameter variable (pv): %p\n", &parameterVar);
    printf("Address of dynamic variable (dv): %p\n", &dynamicVar);
    printf("Address of memory pointed to by dynamic variable (dvm): %p\n", dynamicVar);

    localVar = factorial(5);

    free(dynamicVar);
}

int main(void) {
    int a = 20;

    function(a);

    return 0;
}
