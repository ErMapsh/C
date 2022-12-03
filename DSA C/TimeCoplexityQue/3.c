// Consider the recursive algorithm below, where the random(int n) spends one unit of time to return a
// random integer which is evenly distributed within the range [0,n]. If the average processing time
// is T(n), what is the value of T(6)?
#include <stdio.h>

int function(int n)
{
    int i;//k1 
    
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}

int main(int argc, char const *argv[])
{
    function(6);
    return 0;
}