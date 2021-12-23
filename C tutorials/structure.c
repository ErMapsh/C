#include <stdio.h>//preprocssors. like python already built in files

int main(int argc, char const *argv[])//main functions
{   
    int a, b;//var diclaration
    printf("Enter No of a:\n");
    scanf("%d", &a);//getting input from user and setting a char and addressing a var

    printf("Enter No of b:\n");
    scanf("%d", &b);

    printf("Addition of a & b is %d \n", a+b);
    return 0;//here int and return value 0 is should same
}
