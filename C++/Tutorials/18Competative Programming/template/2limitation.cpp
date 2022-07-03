#include <iostream>
using namespace std;

class Vector
{

public:
    int *arr;
    int size;
    Vector() {}
    Vector(int m)
    {
        size = m;
        arr = new int[size];
    }

    void SetData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the " << i + 1 << " Number: ";
            cin >> arr[i];
        }
    }

    int DotProduct(Vector &v2)
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
    Vector v1(3); // vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    Vector v2(3); // vector 2
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int a = v1.DotProduct(v2);
    cout << a << endl;

    /*
        in this example, we set a input type as int, but what happen when arrays data are different, that time we gonna get wrong answer
        so solution is template
    */
    return 0;
}