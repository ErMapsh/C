#include <stdio.h>
#include <string.h>

// here we use typedef syntax
typedef union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} un;

int main()
{
    un s1;
    printf("Enter Your string:");
    // strcpy(s1.name, "Harry");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;
    gets(s1.name);// here name is active so that we got


    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);

    return 0;
}
