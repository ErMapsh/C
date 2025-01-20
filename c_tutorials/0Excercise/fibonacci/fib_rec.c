#include <stdio.h>
int fib_rec();
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int x = fib_rec(n);
    printf("%d", x);
    return 0;
}

int fib_rec(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }

    return 0;
}
