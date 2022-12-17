/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
#include <string.h>

typedef struct driver
{
    char name[30];
    char LicenseNo[10];
    char route[20];
    int km;
} sd;

int main()
{
    // int n = 3;
    // printf("Enter the Value: ");
    // scanf("%d", &n);
    sd d1, d2, d3;

    printf("Enter The Details of %d Driver..\n", 1);
    printf("Enter Name of Driver: ");
    gets(d1.name);
    printf("Enter License No:");
    gets(d1.LicenseNo);
    printf("Enter Your route:");
    gets(d1.route);
    printf("Enter your total km that u done yet:");
    scanf("%d", &d1.km);
    printf("\n");

    printf("Enter The Details of %d Driver..\n", 2);
    printf("Enter Name of Driver: ");
    gets(d2.name);
    printf("Enter License No:");
    gets(d2.LicenseNo);
    printf("Enter Your route:");
    gets(d2.route);
    printf("Enter your total km that u done yet:");
    scanf("%d", &d2.km);
    printf("\n");

    printf("Enter The Details of %d Driver..\n", 3);
    printf("Enter Name of Driver: ");
    gets(d3.name);
    printf("Enter License No:");
    gets(d3.LicenseNo);
    printf("Enter Your route:");
    gets(d3.route);
    printf("Enter your total km that u done yet:");
    scanf("%d", &d3.km);

    // printing data of driver
    printf("Details of Driver NO 1:\n");
    printf("Name of Driver: %s\n", d1.name);
    printf("License Number of driver: %s\n", d1.LicenseNo);
    printf("Entered Route of Driver: %s\n", d1.route);
    printf("Entered total Km: %d\n\n", d1.km);

    printf("Details of Driver NO 2:\n");
    printf("Name of Driver: %s\n", d2.name);
    printf("License Number of driver: %s\n", d2.LicenseNo);
    printf("Entered Route of Driver: %s\n", d2.route);
    printf("Entered total Km: %d\n\n", d2.km);

    printf("Details of Driver NO 3:\n");
    printf("Name of Driver: %s\n", d3.name);
    printf("License Number of driver: %s\n", d3.LicenseNo);
    printf("Entered Route of Driver: %s\n", d3.route);
    printf("Entered total Km: %d\n\n", d3.km);

    return 0;
}