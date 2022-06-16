#include <iostream>
#include <string.h>
using namespace std;

int strlength(const char *p)
{
    // we dont the string changed by mistake so we can use this
    return strlen(p);
}

int main(int argc, char const *argv[])
{
    char c[] = "ErMapsh";
    cout << "The length of string is "<<strlength(c)<<endl;
    return 0;
}