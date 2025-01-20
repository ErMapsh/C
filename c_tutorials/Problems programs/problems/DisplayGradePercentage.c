#include <stdio.h>

// defining functions

// main function
int main()
{
    float Percentage;
    char flag = 'y', userchoice;
    while (flag == 'y')
    {
        printf("Enter Your Percentage to Convert to Grade:");
        scanf("%f", &Percentage);
        if (Percentage > 40)
        {
            printf("Your Percentage is %d.\n", (int)Percentage); // do typecasting here
        }

        // converting into grade
        int grade;
        grade = Percentage / 10;

        switch ((int)grade)
        {
        case 9:
            printf("-->Your Grade is 'O'\n\n");
            break;
        case 8:
            printf("-->Your Grade is 'E'\n\n");
            break;
        case 7:
            printf("-->Your Grade is 'A'\n\n");
            break;
        case 6:
            printf("-->Your Grade is 'B'\n\n");
            break;
        case 5:
            printf("-->Your Grade is 'C'\n\n");
            break;
        case 4:
            printf("-->Your Grade is 'B'\n\n");
            break;
        default:
            printf("Not Valid value....\n\n");
            break;
        }

        printf("Do you want to run again(Enter 'y' for Yes Or 'n' for No):");
        scanf("%s", &userchoice);

        if (userchoice == 'y')
        {
            // printf("Your Choice is 'y' for yes\n");
            flag = 'y';
        }
        else
        {
            printf("See You Soon\n");
            flag = 'n';
        }
    }
    return 0;
}
