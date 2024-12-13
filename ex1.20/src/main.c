#include <stdio.h>

void detab(char s[], int n);

int main(void)
{
    int n = 8;
    char s[] = "\tThis is a sample text\tfor   maybe somthing.";

    printf("line: %s\n", s);

    detab(s, n);

    printf("1 tab is replaced by %d spaces\n", n);

    return 0;
}

void detab(char s[], int n)
{
    int i, j;
    char r[1000];

    i = j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '\t')
        {
            for (int k = 0; k < n; ++k)
            {
                r[j] = ' ';
                ++j;
            }
            ++i;
        }
        else
        {
            r[j] = s[i];
            ++i;
            ++j;
        }
    }

    r[j] = '\0';

    printf("detab line: %s\n", r);
}