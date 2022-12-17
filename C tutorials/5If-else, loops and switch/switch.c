// ---Rules---
// switch expression should be int or char.
// case value must be int or char.
// case must come inside switch.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your marks:");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("the age is 3");
        break;
    case 13:
        printf("the age is 13");
        switch (marks)
        {
        case 21:
            printf("Your marks has 21");
            break;
        default:
            printf("Your not given a exam");
            break;
        }
        break;
    case 23:
        printf("the age is 23");
        switch (marks)
        {
        case 211:
            printf("Your marks has 321");
            break;
        default:
            printf("Your not given a exam");
            break;
        }
        break;
    default:
        printf("Age is not 3, 13 or 23");
        break;
    }
    return 0;
}
