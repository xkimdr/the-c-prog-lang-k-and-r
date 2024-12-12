#include <stdio.h>

int main(void)
{
    printf("Fahr\tCelcius\n");

    for (float f = 0.0f; f <= 300; f = f + 20.0f)
    {
        printf("%4.0f\t%7.1f\n", f, (5.0f / 9.0f) * (f - 32.0f));
    }

    return 0;
}