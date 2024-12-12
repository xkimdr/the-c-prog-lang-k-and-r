#include <stdio.h>

int main(void)
{
    int c, ca[100];

    for (int i = 0; i < 100; ++i)
    {
        ca[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 32 && c <= 126)
        {
            ++ca[c - 32];
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        if (ca[i] != 0)
        {
            printf("%c: ", i + 32);
            for (int j = 0; j < ca[i]; ++j)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}