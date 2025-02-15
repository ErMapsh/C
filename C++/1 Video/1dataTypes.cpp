#include <iostream> // preprocessor program
using namespace std;

int main()
{
    // cout << "hello world" << endl; // console out
    // cout << "Next Line" << endl; // here endl is endline

    // DataTypes
    short MarksInMaths = 18; // PascalCase Notations
    int a;
    float const b = 4.5; // we cant change constant

    long c;
    long long d;

    double e = 46.333;
    e = 59; // we can change normal variable values like e but not const var
    long double e1 = 4099;

    string name = "ErMapsh"; // string addtional datatype in C++

    // cout << sizeof(a) << endl;
    // cout << "The Marks in maths is " << MarksInMaths << endl;
    cout << "The Score is " << b << endl
         << name << endl;

    /* The C++ string class is different from a C-style array of characters (char[]). It internally manages the null character '\0' for you, but you don’t need to manually check for it when working with C++ string. The null character is automatically added at the end of the string, and the string class will take care of its internal operations. */
    // for (int i = 0; i < name.length(); i++)
    // {
    //     if (name[i] == '\0')
    //     {
    //         cout << "I got null charcter" << endl;
    //     }
    //     else
    //     {
    //         cout << name[i] << " ";
    //     }
    // }

    return 0;
}
