#include <stdio.h>

int main (void)
{
    char *text[] = {
            "Martin J. Dürst",
"Iñtërnâtiônàlizætiøn", // Latin with diacritics
"αβγδεζηθικλμνξοπρςστυφχψω", // Greek
"абвгдежзийклмнопрстуфхцчшщъыьэюя", // Cyrillic (Russian,...)
"كتب", // Arabic (three characters, connected)
           NULL,
        };
    char **p = text;

    while (*p) {
        printf ("%s; size (in bytes): %d\n", *p, strlen(*p));
        p++;
    }
}
