#include <iostream>
using namespace std;

template <class T> // we pass a data type as argument
class Vector
{

public:
    T *arr;
    int size;
    Vector() {}
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    void SetData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the " << i + 1 << " Number: ";
            cin >> arr[i];
        }
    }

    T DotProduct(Vector &v2) // return type depend on type of input
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v2.arr[i];
        }

        return d;
    }
};

int main(int argc, char const *argv[])
{
    Vector<float> v1(3); // vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    Vector<float> v2(3); // vector 2 with a float data type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.DotProduct(v2);
    cout << a << endl;

    
    /* Here we can use different type of data types for one single class, this is best thing
    in template*/
    Vector<double> v3(3); // vector 1 with a double data type
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;

    Vector<double> v4(3); // vector 2 with a double data type
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.90;
    v4.arr[2] = 4.1;

    cout << v1.DotProduct(v2) << endl;
    return 0;
}