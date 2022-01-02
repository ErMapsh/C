#include <stdio.h>
int main()
{
    // ------int Thing -----4 bytes
    int a = 54;
    int *ptra = &a;

    // following both got same value beacause pointer having address of a and we get direct address of a;
    printf("%p\n", ptra); // in ptra we store var a address
    printf("%p\n", &a);

    printf("%d\n", *(ptra));
    printf("%p\n", ptra++); // because pointer is int and int size is 4, thats why here increment is 4


    // *(ptra + 1); this called derefressing
    printf("garbage value is %d\n", *(ptra++)); // i think here we got garbage value beacause in pointer we dont defined var address where we store a info




    //------char Thing----- 1 byte
    char b = '1';
    char *ptrb = &b;

    // following both got same value beacause pointer having address of a and we get direct address of a;
    printf("%p\n", ptrb);
    printf("%p\n", &b);

    printf("%c\n", *(ptrb));
    printf("%p\n", ptrb + 1);// because pointer is char and char size is 1, thats why here increment is 1
    printf("garbage value is %c\n", *(ptrb + 1)); // i think here we got garbage value beacause in pointer we dont defined var address where we store a info

    return 0;
}