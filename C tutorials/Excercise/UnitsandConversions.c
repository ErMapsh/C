/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/

#include <stdio.h>
#include<stdlib.h>

void conversion();
int main(int argc, char const *argv[])
{
    int num, choice;
    printf("Enter Number:");
    scanf("%d", &num);
    printf("\nYour Number is %d.", num);

    while (1)
    {
        printf("\n--Units and conversions---\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.pound to kgs\n5.inches to meters\n6.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &choice);
        conversion(choice, num);
    }
    /* code */
    return 0;
}

void conversion(int choice, int num)
{

    switch (choice)
    {
    case 1:
        printf("The value of %dKms to miles is %fml\n", num, num * 0.62137);
        break;
    case 2:
        printf("The value of %dinches to foot is %f ft\n", num, num/12.0);
        break;
    case 3:
        printf("The value of %dcms to inches is %fin\n", num, num/2.54);
        break;
    case 4:
        printf("The value of %dpounds to kgs is %fkgs\n", num, num * 0.45359237);
        break;
    case 5:
        printf("The value of %dinches to meters is %fm\n", num, num * 0.0254 );
        break;
    case 6:
        exit(1);
        break;

    default:
        printf("\aWrong Input............\n");
        break;
    }
}
