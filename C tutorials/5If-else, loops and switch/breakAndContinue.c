// break
// Continue

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter No:");
    scanf("%d", &n);

    // break
    for (int i = 0; i < n; i++)
    {
        if (i == 10)
        {
            printf("\aCondition: 10 and after 10 values are not valid...\n");
            break; // here break say break the loop and exit.
        }
        else
        {
            printf("%d\n", i);
        }
    }

    // continue
    for (int i = 0; i < n; i++)
    {
        if (i == 4)
        {
            continue; // here continue says go to loop
        }
        else
        {
            // printf("the item is %d\n", i);
        }
    }

    return 0;
}
