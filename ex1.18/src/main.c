#include <stdio.h>

#define T 1
#define F 0
#define M 1000

int getline(char line[], int maxline);

int main(void)
{
    int len;
    char line[M];

    while ((len = getline(line, M)) != -1)
    {
        if (len != -2)
        {
            printf("length: %d, line: %s\n", len, line);
        }
    }

    return 0;
}

int getline(char line[], int maxline)
{
    int c, i, j, f, g;
    char temp[maxline];

    c = i = j = 0;
    f = g = F;

    while (i < maxline - 1 && (c = getchar()) != '\n' && c != EOF)
    {
        if (!f)
        {
            if (c == ' ' || c == '\t')
            {
                continue;
            }
            f = T;
        }
        temp[i] = (char)c;
        ++i;
    }

    if (i == 0)
    {
        if (c == EOF)
        {
            return -1;
        }
        return -2;
    }

    for (int k = i - 1; k >= 0; --k)
    {
        if (!g)
        {
            if (temp[k] == ' ' || temp[k] == '\t')
            {
                continue;
            }
            g = T;
        }
        line[k] = temp[k];
        ++j;
    }

    line[j] = (char)'\0';

    return j;
}