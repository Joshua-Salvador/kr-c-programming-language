/* copy input to output, replace tab, backspace, and \
   with \t, \b, \\, respectively
*/

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        if (c == '\\')
        {
            putchar('\\');
        }
        putchar(c);
    }
    return 0;
}