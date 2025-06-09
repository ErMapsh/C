#include <iostream>
#include <math.h>
using namespace std;

int toBinary(int n)
{
    int answer = 0, i = 0, bit;
    while (n != 0)
    {
        bit = n & 1;
        n = n >> 1;

        answer = (bit * pow(10, i)) + answer;
        i++;
    }
    return answer;
}

int main(int argc, char const *argv[])
{
    int number;
    printf("Tell me number: ");
    scanf("%d", &number);
    number = toBinary(number);
    printf("Binary number is %d\n", number);
    return 0;
}