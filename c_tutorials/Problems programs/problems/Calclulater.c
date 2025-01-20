#include <stdio.h>

// declaration of functions
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

int main()
{
    int a, b, choice;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Your First number is %d and second number is %d\n", a, b);

    // user choice
    char flag = 'y';
    while (flag == 'y')
    {   

        printf("\n-----Operations-----\n1.Addition\n2.Substraction\n3.Multiplication\n4.divide\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;

        default:
            printf("Enter Correct Choice..\n");
            break;
        }


        //If User Wants to continue
        printf("\nWant to continue?('y' for yes)");
        scanf("%s", &flag);
        if (flag!='y')
        {
            flag = 'n';
        }
        
    }

    return 0;
}

// Functions                  
int add(int a, int b)
{
    printf("Addition of %d and %d is %d.\n", a, b, a + b);
    return 0;
}
int sub(int a, int b)
{
    printf("Substraction of %d and %d is %d.\n", a, b, a - b);
    return 0;
}
int mul(int a, int b)
{
    printf("Multiplication of %d and %d is %d.\n", a, b, a * b);
    return 0;
}
float div(int a, int b)
{
    printf("Division of %d and %d is %f.\n", a, b, (float)a / b);
    return 0;
}