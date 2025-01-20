// loops in C
// 1.while 2.do while 3.for

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ------DO while loop: this run at list one time------
    // int j = 16;

    int j;
    // printf("Enter the No:");
    // scanf("%d", &j);

    do
    {
        j = j + 1;
        // j += 1;
        // printf("%d\n", j);
    } while (j < 10);



    // ------While loop------
    int a = 1;
    while (a <= 100)
    {
        // printf("%d\n", a);
        a += 1;
    }



    // ------For while loop------
    int b = 4;
    for (int i = 1,j = 0;    i <= 10, j<3;     i++, j++)
    {
        //   printf("%d\n", b*i);
        printf("%d %d\n", i, j);
    }

    return 0;
}
