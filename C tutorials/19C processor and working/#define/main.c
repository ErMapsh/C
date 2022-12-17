#include <stdio.h>
#define PIE 3.14
#define square(x) x *x // funtion also

int main()
{
    printf("The actual value of PIE is %d\n", PIE);
    int value = 3;
    printf("The square of %d is %d", value, square(value));
    return 0;
}