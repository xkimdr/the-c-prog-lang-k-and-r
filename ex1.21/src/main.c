#include <stdio.h>

void entab(char s[], int n);

int main(void)
{
    int n = 2;
    char s[] = "    This is a sample text           for maybe somthing.";

    printf("line: %s\n", s);

    entab(s, n);

    printf("%d spaces replaces with 1 tab\n", n);

    return 0;
}

void entab(char s[], int n)
{
    int i, j, k;
    char r[1000];

    i = j = k = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            ++k;
            ++i;
        }
        else
        {
            if (k != 0)
            {
                for (int l = 0; l < k / n; ++l)
                {
                    r[j] = '\t';
                    ++j;
                }

                int p = k - n;

                if (p < 0)
                {
                    p = k;
                }

                for (int l = 0; l < p; ++l)
                {
                    r[j] = ' ';
                    ++j;
                }
                k = 0;
            }
            r[j] = s[i];
            ++i;
            ++j;
        }
    }

    r[j] = '\0';

    printf("entab line: %s\n", r);
}