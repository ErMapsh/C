#include <stdio.h>
int main()
{
    char str[52];
    printf("Enter the string:");
    gets(str);

    // we can print the data using two way, using printf and puts
    printf("%s\n", str);
    puts(str);
    return 0;
}