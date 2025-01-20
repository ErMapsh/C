#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char string[] = {'m', 'a', 'p', 's', 'h', '\0'}; // this is valid string
    char string[65] = "mapsh";

    printstr(string);
    return 0;
}