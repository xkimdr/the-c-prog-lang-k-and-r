#include <stdio.h>

#define L 0.0f
#define U 300.0f
#define S 20.0f

float celcius(float fahr);

int main(void)
{
    printf("Fahr\tCelcius\n");

    for (float i = L; i <= U; i = i + S)
    {
        printf("%4.0f\t%7.1f\n", i, celcius(i));
    }

    return 0;
}

float celcius(float fahr)
{
    return (1.0f * 5 / 9) * (fahr - 32);
}