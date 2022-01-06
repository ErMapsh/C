#include <stdio.h>
#include <string.h>

int parser(char *str);

int main()
{
    char string[] = "    <harry>    this is a heading   </harry>     ";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}

int parser(char *str)
{
    int None = 0;
    int index = 0;
    // printf(str);
    for (int i = 0; i < strlen(str); i++)
    {
        // printf("%c\n", str[i]);
        if (str[i] == '<')
        {
            None = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            None = 0;
            continue;
        }

        if (None == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // i got new string array now
    // removing beginning
    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    // Removing back space
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
    return 0;
}
