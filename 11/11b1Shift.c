#include <stdio.h>

int main (void)
{
    char *text[] = {
            "Martin J. Durst",
"Internationalization", // Latin with diacritics
"�������ÃăŃƃǃȃɃʃ˃̃̓΃�?�Ѓу҃ӃԃՃ�", // Greek
"�p�q�r�s�t�u�w�x�y�z�{�|�}�~������������������������������������", // Cyrillic (Russian,...)
"???", // Arabic (three characters, connected)
           NULL,
        };
    char **p = text;

    while (*p) {
        printf ("%s; size (in bytes): %d\n", *p, strlen(*p));
        p++;
    }
}
