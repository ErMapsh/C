#include <iostream>
using namespace std;

template <class T>
class MyClass
{
private:
    T data;

public:
    MyClass(T data)
    {
        this->data = data;
    }
    void Display();
};

// function can be external
template <class T>
void MyClass<T>::Display()
{
    cout << data;
}

int main(int argc, char const *argv[])
{
    MyClass<int> m1(4);
    m1.Display();
    return 0;
}