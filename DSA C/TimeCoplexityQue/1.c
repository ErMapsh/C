// Fine the time complexity of the func1 function in the program show in program1.c as follows:

#include <stdio.h>
void func1(int array[], int length)
{
    int sum = 0;     // k1
    int product = 1; // k1

    for (int i = 0; i < length; i++) // f2 = k2n
    {
        sum += array[i];
    }
    for (int i = 0; i < length; i++) // f3 = k3n
    {
        product *= array[i];
    }
}
int main()
{

    int arr[] = {3, 5, 66};
    func1(arr, 3);
    return 0;
}

// so total time complexity is
// Tn = k1+k2n+k3n
// Tn = O(n)

// so time complexity is depend on n=length