/* histogram, length of words in input */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, i, currlen, state;
    int length[45];

    for (i = 0; i < 45; ++i)
    {
        length[i] = 0;
        printf("%d\n", i);
    }
    currlen = 0;
    state = IN;
    while ((c = getchar()) != EOF)
    {
        if ((c == ' ' || c == '\t' || c == '\n') && currlen > 0)
        {
            ++length[currlen];
            currlen = 0;
        }
        else if (!(c == ' ' || c == '\t' || c == '\n'))
            ++currlen;
    }

    for (i = 0; i < 45; ++i)
    {
        printf("%d - \n", i);
        for (int j = 0; j < length[i]; ++j)
            printf("-");
        printf("\n");
    }

    return 0;
}