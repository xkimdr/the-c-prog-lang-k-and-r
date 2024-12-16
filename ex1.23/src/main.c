#include <stdio.h>

#define MAX 100000

void getlines(char buffer1[], int max);
void remove_c_style_comment(char buffer1[], char buffer2[]);
void remove_cpp_style_comment(char buffer2[], char buffer3[]);

int main(void)
{
    char buffer1[MAX + 1];
    char buffer2[MAX + 1];
    char buffer3[MAX + 1];

    getlines(buffer1, MAX);
    remove_c_style_comment(buffer1, buffer2);
    remove_cpp_style_comment(buffer2, buffer3);

    printf("%s\n", buffer3);

    return 0;
}

void getlines(char buffer1[], int max)
{
    int c, i;

    i = 0;

    while (i < max && (c = getchar()) != EOF)
    {
        buffer1[i] = (char)c;
        ++i;
    }

    buffer1[i] = (char)'\0';
}

void remove_c_style_comment(char buffer1[], char buffer2[])
{
    int i, j, f;

    i = j = f = 0;

    while (buffer1[i] != '\0')
    {
        if (buffer1[i] == '/' && buffer1[i + 1] == '*')
        {
            f = 1;
        }
        else if (buffer1[i] == '*' && buffer1[i + 1] == '/')
        {
            f = 0;
            i += 2;
        }

        if (!f)
        {
            buffer2[j] = buffer1[i];
            ++j;
        }

        ++i;
    }

    buffer2[j] = '\0';
}

void remove_cpp_style_comment(char buffer2[], char buffer3[])
{
    int i, j, f;

    i = j = f = 0;

    while (buffer2[i] != '\0')
    {
        if (buffer2[i] == '/' && buffer2[i + 1] == '/')
        {
            f = 1;
        }
        else if (f && buffer2[i] == '\n')
        {
            f = 0;
        }

        if (!f)
        {
            buffer3[j] = buffer2[i];
            ++j;
        }

        ++i;
    }

    buffer3[j] = '\0';
}