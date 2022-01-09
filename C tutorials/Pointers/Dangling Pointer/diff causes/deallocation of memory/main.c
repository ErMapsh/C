#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0];
    ptr[1];
    ptr[2];
    ptr[3];
    free(ptr);  // Ptr now becomes a dangling pointer
    ptr = NULL; // ptr no longer dangling, its become NULL(nothing point)
    return 0;
}