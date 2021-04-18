/* count blanks, tabs, and newlines */

#include <stdio.h>

int main()
{
    int c;
    int nl, bl, tb;

    nl = bl = tb = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tb;
        if (c == ' ')
            ++bl;
    }
    printf("Newlines: %d\nTabs: %d\nBlank Spaces: %d\n", nl, tb, bl);
    return 0;
}