#include <stdio.h>
int fib();
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}

int fib(int n)
{
    int a = 0, b = 1, sum = 0;
    printf("%d %d ", a, b);
    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}
