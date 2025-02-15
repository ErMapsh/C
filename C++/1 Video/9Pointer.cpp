#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptra; // saying this is pointer that only takes address
    ptra = &a;
    cout << ptra << endl; // value print in hex of a

    cout << "value of a is " << a << endl;            // directly
    cout << "value of a is " << *ptra << endl;        // dereferencing pointer
    cout << "Address value of a is " << &a << endl;   // using ampersand operator
    cout << "Address value of a is " << ptra << endl; // store address value in ptra
    return 0;
}