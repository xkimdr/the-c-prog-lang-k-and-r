#include <stdio.h>

#define T 1
#define F 0

int main(void)
{
    int c, s, pc;

    s = F;
    pc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            s = F;
            c = '\n';
        }
        else if (!s)
        {
            s = T;
        }
        if (!(pc == '\n' && c == '\n'))
        {
            putchar(c);
        }
        pc = c;
    }

    return 0;
}