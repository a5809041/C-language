#include <stdio.h>

int main (void)
{
    char *text[] = {
            "Martin J. Durst",
"Internationalization", // Latin with diacritics
"ƒ¿ƒÀƒÁƒÂƒÃƒÄƒÅƒÆƒÇƒÈƒÉƒÊƒËƒÌƒÍƒÎƒÏ?ƒĞƒÑƒÒƒÓƒÔƒÕƒÖ", // Greek
"„p„q„r„s„t„u„w„x„y„z„{„|„}„~„€„„‚„ƒ„„„…„†„‡„ˆ„‰„Š„‹„Œ„„„„„‘", // Cyrillic (Russian,...)
"???", // Arabic (three characters, connected)
           NULL,
        };
    char **p = text;

    while (*p) {
        printf ("%s; size (in bytes): %d\n", *p, strlen(*p));
        p++;
    }
}
