#include <stdio.h>

/* print celsius to fahrenheit tabel */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.1f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
