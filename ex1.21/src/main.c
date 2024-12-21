#include <stdio.h>
#define N 2

int main(void)
{
    int c, bc;
    bc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++bc;
            if (bc == N)
            {
                putchar('\t');
                bc = 0;
            }
            continue;
        }
        if (bc != 0)
        {
            for (int i = 0; i < bc; ++i)
            {
                putchar(' ');
            }
            bc = 0;
        }
        putchar(c);
    }

    return 0;
}