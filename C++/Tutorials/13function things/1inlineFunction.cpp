#include <iostream>
using namespace std;

/*
 in inline function the whole inline function got replace, where fuction is calling;
 adv: if few lines of code are in fuction there is useful, because that few line got replaced by when function is calling

 disadvantage: if in function, there is lots line of code there, that time if we us multiple time inline function there is memory gonna full, beacause that all function code gonna replace by when function is calling.
*/
inline int product(int a, int b)
{
    return a * b;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    return 0;
}