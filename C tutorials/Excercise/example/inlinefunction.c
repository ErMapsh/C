#include<stdio.h>
inline void returnvalue(){
    printf("%d\n", 3);
}

int main()
{
    returnvalue();
    returnvalue();
    returnvalue();
    returnvalue();
    return 0;
}