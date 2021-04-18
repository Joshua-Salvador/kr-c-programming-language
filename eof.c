/*
verify that getchar() != EOF is 0 or 1
*/

#include <stdio.h>

int main()
{
    while(1)
    {
        printf("%d", getchar() != EOF);
    }
    return 0;
}