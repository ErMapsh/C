#include <iostream>
#include <math.h>
using namespace std;

long NagativeDecimaltoBinary(int n)
{
    int i = 0, bit;
    long answer = 0;
    /* first thing is make positive number-> 2's complement */
    n =

        return answer;
}

int main(int argc, char const *argv[])
{
    int number;
    long binary;
    printf("Tell me the negative number: ");
    scanf("%d", &number);
    binary = NagativeDecimaltoBinary(number);
    printf("Binary number is %d\n", binary);
    return 0;
}