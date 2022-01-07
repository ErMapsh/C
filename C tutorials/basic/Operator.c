#include <stdio.h>

int main(int argc, char const *argv[])
{
    // float a = 23.4;
    int a = 2;
    int b = 4;

    //---Arthimetic operator---
    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a / b: %d\n", a / b);
    printf("a * b: %d\n", a * b);
    printf("a % b: %d\n\n", a % b);

    //---Relational operator---> return true or false, here true is 1 and false is 0.
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a < b: %d\n", a < b);
    printf("a <= b: %d\n", a <= b);
    printf("a > b: %d\n", a > b);
    printf("a >= b: %d\n\n", a >= b);

    //---Logic Operator---
    printf("a && b: %d\n", a && b);// if both operand become non-zero then condition true.
    printf("a || b: %d\n", a || b);// if any of of these two operand are non-zero, then condition become true
    printf("!(a && b): %d\n\n", !(a && b));// reverse 

    //----Bitwise Operator----
    printf("a & b: %d\n", a&b); // 10&101
    printf("a | b: %d\n", a|b); // 10|101
    printf("a ^ b: %d\n\n", a^b); // 10^101 //ExclusiveOR- any one value shou;b be false and one value should be true, then 1. if not then value become 0.

    //---Assignment Operator---
    printf("a+=1: %d\n", a+=1 );
    printf("a-=1: %d\n", a-=1 );
    printf("a*=4: %d\n", a*=4 );
    printf("a/=2: %d\n\n", a/=2 );
    return 0;
}
