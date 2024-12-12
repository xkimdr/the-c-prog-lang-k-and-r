#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("----Result----\n");
        printf("Length: %d\n", max);
        printf("Line: %s", longest);
    }

    return 0;
}

int getline(char line[], int maxline)
{
    int c, i, j;

    i = j = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        if (j < maxline - 1)
        {
            line[j] = (char)c;
            ++j;
        }
        ++i;
    }

    if (c == '\n')
    {
        line[j] = (char)c;
        ++j;
        ++i;
    }

    line[j] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}