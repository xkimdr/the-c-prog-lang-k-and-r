#include <stdio.h>

#define MC 1000
#define L 80

int getline(char line[], int limit);

int main(void)
{
    int len;
    char line[MC];

    while ((len = getline(line, MC)) > 0)
    {
        if (len > L)
        {
            printf("length: %d, line: %s\n", len, line);
        }
    }

    return 0;
}

int getline(char line[], int limit)
{
    int c, i;

    i = 0;

    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n')
    {
        line[i] = (char)c;
        ++i;
    }

    line[i] = (char)'\0';

    return i;
}