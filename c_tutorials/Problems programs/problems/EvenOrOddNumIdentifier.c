#include <stdio.h>

int main()
{
    int n;
    char flag = 'y';
    while (flag == 'y')
    {

        printf("Enter No: ");
        scanf("%d", &n);
        printf("Your Number is %d\n", n);

        n = n % 2;
        switch (n)
        {
        case 1:
            printf("Number is odd.\n\n");
            break;
        case 0:
            printf("Number is Even.\n\n");
            break;
        default:
            printf("Enter Valid Value/ integer value\n\n");
            break;
        }

        printf("Do you want to continue?('y' for 'yes'):");
        scanf("%s", &flag);
        if (flag != 'y')
        {
            flag = 'n';
        }
        else
        {
            flag = 'y';
        }
    }
    return 0;
}
