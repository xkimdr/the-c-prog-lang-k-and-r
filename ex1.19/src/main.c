#include <stdio.h>

int sl(char s[]);
void reverse(char s[]);

int main(void)
{
    char s[] = "This is a sample text.";

    printf("string: %s\n", s);

    reverse(s);

    return 0;
}

int sl(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

void reverse(char s[])
{
    char r[1000];
    int j, k;

    j = 0;
    k = sl(s);

    for (int i = k - 1; i >= 0 && j < 1000; --i)
    {
        r[j] = s[i];
        ++j;
    }

    r[j] = '\0';

    printf("reverse: %s\n", r);
}