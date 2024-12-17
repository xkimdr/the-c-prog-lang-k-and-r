#include <stdio.h>

char expected(char x);

int main(void)
{
    int i = -1;
    int ln = 1;
    char temp[100];

    for (int i = 0; i < 100; ++i)
    {
        temp[i] = 0;
    }

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++ln;
        }
        if (c == '{' || c == '(' || c == '[')
        {
            ++i;
            temp[i] = (char)c;
        }
        else if (c == '}' || c == ')' || c == ']')
        {
            char ex = expected((char)temp[i]);
            if ((char)c == ex)
            {
                --i;
            }
            else
            {
                printf("\033[31mSyntaxError:\033[0m\n"
                       "  Expected: %c\n"
                       "  Found:    %c\n"
                       "  At line:  %d\n",
                       ex, (char)c, ln);
                return -1;
            }
        }
    }

    return 0;
}

char expected(char x)
{
    if (x == '{')
    {
        return '}';
    }
    else if (x == '(')
    {
        return ')';
    }
    else if (x == '[')
    {
        return ']';
    }
    else
    {
        return '0';
    }
}