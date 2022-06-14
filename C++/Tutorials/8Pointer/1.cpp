#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int *b = &a;//address of a is store in b as a value
    cout << "The address of a is " << &a << endl;
    cout << "The address store in b is " << b << endl;
    cout << "The address of b is " << &b << endl;

    cout << "The value of a is " << a << endl;
    cout << "The value of a using dereferencing is " << *b << endl;


    // Pointer to Pointer concept
    int **c = &b;
    cout<<"\nThe address value in c is b adress: "<<c<<endl;
    cout<<"The value in at(at(C)) is "<< **c<<endl;

    return 0;
}