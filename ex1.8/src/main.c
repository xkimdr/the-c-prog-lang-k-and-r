#include <stdio.h>

int main(void)
{
    double blanks, tabs, newlines;

    blanks = tabs = newlines = 0;

    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == '\n')
        {
            ++newlines;
        }
    }

    printf("blanks = %.0f, tabs = %.0f and newlines = %.0f\n", blanks, tabs, newlines);

    return 0;
}