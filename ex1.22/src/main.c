#include <stdio.h>
#define N 80

int main(void)
{
    int c, cc;
    cc = 0;
    while ((c = getchar()) != EOF)
    {
        ++cc;
        if (c == '\n')
        {
            cc = 0;
        }
        putchar(c);
        if (cc == N)
        {
            putchar('\n');
            cc = 0;
        }
    }

    return 0;
}