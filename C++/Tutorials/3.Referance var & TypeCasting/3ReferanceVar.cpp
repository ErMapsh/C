#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ----------reference variable----------
    int a = 5;
    int &b = a;// b me a rakhdo, b is a
    /*
        creating block for b in memory and assigning another variable location in it
    */
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;

    return 0;
}
