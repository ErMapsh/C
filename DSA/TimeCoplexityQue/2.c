#include<stdio.h>

void func(int n)
{
    int sum = 0;//f1n = k1
    int product = 1;//f1n = k1

    for (int i = 0; i < n; i++)//f2n = k2n2
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d, %d\n", i, j);
        }
    }
}


int main(int argc, char const *argv[])
{
    func(6);
    return 0;
}

// total complexity is O(n2)