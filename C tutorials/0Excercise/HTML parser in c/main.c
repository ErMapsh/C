/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/

#include <stdio.h>

void parser(char *str, int size);
int main()
{
    int temp;
    char string[] = "<h1> This is a heading </h1>";
    int size = sizeof(string) / sizeof(string[0]);
    parser(string, size);

    return 0;
}

void parser(char *str, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(str + i) == '<')
        {

            for (int j = i + 1; j < size; j++)
            {
                if (*(str + j) == '>')
                {
                    if (*(str + j + 1) == ' ')
                    {
                        j++;
                    }

                    i = j;
                    break;
                }
            }
        }
        else
        {
            printf("%c", *(str + i));
        }
    }
}