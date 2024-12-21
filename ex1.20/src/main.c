#include <stdio.h>
#define N 2

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            for (int i = 0; i < N; ++i)
            {
                putchar(' ');
            }
            continue;
        }
        putchar(c);
    }

    return 0;
}