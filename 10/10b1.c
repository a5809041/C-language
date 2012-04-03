#include <stdio.h>
#include <string.h>

#define NMAX 10

int main(void)
{
    char *p[] = { "one", "two", "three", "four", "five",
                  "six", "seven", "eight", "nine", "ten"
                };
    char *temp;
    int i, j, min;

    for (i=0; i<NMAX-1; i++) {
        /* find the smallest remaining string */
        min = i;
        for (j = i+1; j<NMAX; j++) {
            /* comparing two strings */
            if (strcmp(p[min], p[j]) > 0) {//when p[min] is larger than p[j], return more than 0 
                min = j;
            }
        }

        temp = p[min];
        p[min] = p[i];
        p[i] = temp;
    }

    for (i=0; i<NMAX; i++)
        puts(p[i]);

    return 0;
}
