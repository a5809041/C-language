#include <stdio.h>

int main(void){
int i;
static char *month_name[] = {"January","February","March",
                          "April","May","June",
                          "July","August","September",
                           "October","November","December",
                            "unknown month"};
    for (i = 0; i < 12; i++) {
        printf("Address of %s: %p\n",
            month_name[i], month_name[i]);
        printf("Address of pointer to %s: %p\n",
            month_name[i], &(month_name[i]));
    }

return 0;
}
