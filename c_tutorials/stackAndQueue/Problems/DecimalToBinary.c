// Stack is used to convert decimal number to binary
#include <stdio.h>
#include <conio.h>
#define max 20 // constant value

int main()
{

    int n, tos = -1;
    int stack[max];

    // Getting Input from User
    printf("Enter Number:");
    scanf("%d", &n);

    printf("Binary conversion of %d number is: ", n);

    // Logic behind the code
    // - we have maximun number of array
    while (n > 0)
    {
        tos++;
        stack[tos] = n % 2;
        n = n / 2;
    }

    // we know while calculation of decimal to binary we read to most significant bit (msb) to least significant bit(lsb)
    /*
    as input 8
     in stack data will seens like
        pointer 3 = 1
        pointer 2 = 0
        pointer 1 = 0
        pointer 0 = 0
    and we read data from most signi bit(msb)
    */
    while (tos != -1)
    {
        printf("%d", stack[tos]);
        tos--;
    }
}