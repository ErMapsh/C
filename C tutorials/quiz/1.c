#include<stdio.h>
int main()
{
    static int i = 6;
    if (--i){
        main();
        printf("%d", i);
    }
    return 0;
}