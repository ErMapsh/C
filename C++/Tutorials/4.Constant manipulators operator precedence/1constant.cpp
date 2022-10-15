#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* when sometimes we dont want to change var value that time we can use constant
    for that varibale 
    ie. const float pie = 3.17;
    */
    const int a = 4; // a become only read only
    a = 5;// cant change var value, throwing error for this line
    return 0;
}
