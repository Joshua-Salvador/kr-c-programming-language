/* copy input to output, make sure only one blank space */

#include <stdio.h>

int main()
{
    int curr;
    int prev;

    while ((curr = getchar()) != EOF)
    {
        if (prev != ' ')
            putchar(curr);
        prev = curr;
    }
    return 0;
}