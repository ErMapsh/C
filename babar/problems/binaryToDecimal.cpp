#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDecimal(long n)
{
    int answer = 0, i = 0, bit;
    while (n != 0)
    {
        bit = n % 10;
        if (bit != 0)
            answer += pow(2, i);
        n = n / 10;
        i++;
    }
    return answer;
}

int main(int argc, char const *argv[])
{
    long binary;
    int decimal;
    printf("Tell me Binary number: ");
    scanf("%ld", &binary);
    decimal = BinaryToDecimal(binary);
    printf("Decimal number is %d\n", decimal);
    return 0;
}