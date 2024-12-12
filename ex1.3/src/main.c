#include <stdio.h>

int main(void)
{
    float celcius;
    float fahr = 0.0f;

    printf("fahr\tcelcius\n");

    while (fahr <= 300)
    {
        celcius = (5.0f / 9.0f) * (fahr - 32.0f);
        printf("%4.0f\t%7.1f\n", fahr, celcius);
        fahr = fahr + 20.0f;
    }

    return 0;
}