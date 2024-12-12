#include <stdio.h>

int main(void)
{
    float fahr;
    float celcius = 0.0f;

    printf("Celcius\tFahrenheit\n");

    while (celcius <= 300)
    {
        fahr = celcius * (9.0f / 5.0f) + 32.0f;
        printf("%7.0f\t%10.1f\n", celcius, fahr);
        celcius = celcius + 20.0f;
    }

    return 0;
}