#include <stdio.h>
void prime(int x);

int main()
{
    int num;
    printf("Enter Your Number: ");
    scanf("%d", &num);
    prime(num); // call the funtions
    return 0;
}

void prime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            printf("Your Number is prime\n");
            break;
        }
        i++;
    }
    if (n==i)
    {
        printf("No is prime");
    }
    
}