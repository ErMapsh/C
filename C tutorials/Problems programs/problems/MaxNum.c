#include <stdio.h>
#include <conio.h>

int main()
{
    int firstn, secondn, thirdn, max;
    printf("Enter First Number:");
    scanf("%d", &firstn);
    printf("Enter Second Number:");
    scanf("%d", &secondn);
    printf("Enter Third Number:");
    scanf("%d", &thirdn);

    max = firstn;
    if (max < secondn)
    {
        max = secondn;
    }
    if (max < thirdn)
    {
        max = thirdn;
    }
    printf("The Maximum Number is %d\n", max);

    return 0;
}
