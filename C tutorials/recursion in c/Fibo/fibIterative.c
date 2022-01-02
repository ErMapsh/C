#include<stdio.h>
int main()
{
    int n, a = 0, b =1, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("0)%d\n1)%d\n", a, b);

    for (int i = 1; i < n; i++)
    {
        sum = a+b;
        printf("%d)%d\n",i+1, sum);
        a=b;
        b=sum;
    }
    
    
    return 0;
}