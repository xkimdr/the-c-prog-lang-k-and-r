#include <stdio.h>

#define T 1
#define F 0

int main(void)
{
    int c, nc, nw, nl, s;

    s = F;
    c = nc = nw = nl = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n')
        {
            s = F;
        }
        else if (!s)
        {
            s = T;
            ++nw;
        }
    }

    printf("chars: %d, words: %d and lines: %d\n", nc, nw, nl);

    return 0;
}