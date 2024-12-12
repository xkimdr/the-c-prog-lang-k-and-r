#include <stdio.h>

#define T 1
#define F 0

int main(void)
{
    int c, nc, s, wa[100];

    s = F;
    c = nc = 0;

    for (int i = 0; i < 100; ++i)
    {
        wa[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ' || c == '\t' || c == '\n')
        {
            --nc;
            if (s)
            {
                ++wa[nc];
                nc = 0;
            }
            s = F;
        }
        else if (!s)
        {
            s = T;
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        if (wa[i] != 0)
        {
            printf("%d: ", i);
            for (int j = 0; j < wa[i]; ++j)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}