#include <stdio.h>

int main()
{
    // If statement or if-else if-else statement
    int age;
    printf("Enter Your age:");
    scanf("%d", &age);
    printf("You have Entered %d as your age\n", age);

    if (age < 18)
    {
        printf("You are not eligible...");
    }
    else if (age == 18)
    {
        printf("get ur licence and then drive");
    }
    else
    {
        printf("You are eligible...");
    }

    return 0;
}
