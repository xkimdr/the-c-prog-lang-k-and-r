#include <stdio.h>
#define T 1
#define F 0

int main(void)
{
    int c, b;

    b = F;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            if (!b)
            {
                putchar(' ');
                b = T;
            }
            continue;
        }
        b = F;
        putchar(c);
    }

    return 0;
}