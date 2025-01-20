#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%lu\n", sizeof(int));
    printf("%d\n", sizeof(int));

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", sizeof(a)/sizeof(int));
    return 0;
}
