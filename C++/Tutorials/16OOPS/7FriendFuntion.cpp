#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;
    friend Complex sumComplex(Complex o1, Complex o2);// sumComplex function is allowed to do anything with my private member

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void PrintNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


Complex sumComplex(Complex o1, Complex o2){
    /*
        this function return complex;
    */
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sumOfObject;
    c1.setdata(2, 3);
    c1.PrintNumber();

    c2.setdata(5, 8);
    c2.PrintNumber();

    sumOfObject = sumComplex(c1, c2);
    sumOfObject.PrintNumber();

    return 0;
}


/*Poperties of friend funtion
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex == invalid.
3. Can be invoked without the help any object.
4. Usually contain the argument as object and return class object. 
5. Function can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/