#include <stdio.h>
int main()
{
    // ------int Thing -----4 bytes
    int a = 54; // memory allocation for this block has created in memory anywhere
    int *ptra = &a;

    // following both got same value beacause pointer having address of a and we get direct address of a;
    printf("%p\n", ptra); // in ptra we store var a address
    printf("%p\n\n", &a);

    printf("%d\n", *(ptra));
    printf("pointer address for ptra++ is %p\n\n", ptra++); // because pointer ype is int and int size is 4, thats why here increment is 4

    // *(ptra + 1); this called derefressing
    printf("garbage value is %d\n", *(ptra++)); // i think here we got garbage value beacause in pointer we dont defined var address where we store a info

    //------char Thing----- 1 byte
    /*
        b = '1' have 49 position in ascii value
        so if ptrb we will get all next value form 49 position when increament ptrb continuosly
    */
    char b = '1';
    char *ptrb = &b; //

    // following both got same value beacause pointer having address of a and we get direct address of a;
    printf("\n------Charcter pointer----\n%p\n", ptrb);
    printf("%p\n", &b);

    printf("%c\n", *(ptrb));
    printf("%p\n", ptrb + 1);    // because pointer is char and char size is 1, thats why here increment is 1
    printf("%c\n\n", *(ptrb) + 1); // we well get here 2 because after base address + distance (1) = ptr[1] = 2, like that *(ptr) + 3= will give 3 


    char ch = ' ';
    char *ptrc = &ch;
    for (int i = 0; i < 256; i++)
    {
        printf("value at %d is %c\n", i, *(ptrc)+i);
    }
    
    
    *ptrc = *(ptrc) + 255;
    printf("\nSeprately: value at index 255 is %c ", *ptrc);
    return 0;
}