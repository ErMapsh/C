#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptra;
    ptra = &a;
    cout << ptra << endl; // value print in hex of a

    cout << "value of a is " << a << endl;            // directly
    cout << "value of a is " << *ptra << endl;        // dereferencing pointer
    cout << "Address value of a is " << &a << endl;   // using ampersand operator
    cout << "Address value of a is " << ptra << endl; // store value in ptra
    return 0;
}