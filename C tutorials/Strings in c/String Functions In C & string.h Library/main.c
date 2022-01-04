#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "mapsh";
    char s2[] = "ErMapsh";
    char s3[54];

    // Length of string
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n\n", strlen(s2));

    // Comparing string
    printf("The strcmp for s1, s2 returned %d\n", strcmp(s1, s2));

    // joins/concat two string
    puts(strcat(s1, s2));

    printf("\n");
    
    // Reversed string
    printf("The reversed string s1 is: ");
    puts(strrev(s1));
    printf("\n");
    printf("The reversed string s2 is: ");
    puts(strrev(s2));

    printf("\n");

    // copy string
    strcpy(s3 ,strcat(s1, s2));
    puts(s3);
    

    // allow user to enter two strings and then concatenate them by saying that 
    // str1 is a friend of str2
    return 0;
}
