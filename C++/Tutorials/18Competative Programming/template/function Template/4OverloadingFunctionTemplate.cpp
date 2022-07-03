#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am fist function " << a << endl;
}

template <class T> // generic type 
void func(T a)
{
    cout << "this is templitized function: " << a << endl;
}
int main(int argc, char const *argv[])
{
    func(4); // exact match takes highest priority
    func('c');// ambugity resolve
    func(3.4);
    return 0;
}