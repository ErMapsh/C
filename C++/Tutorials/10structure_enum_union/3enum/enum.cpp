#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum Meal
    {
        breakfast,//-> consider as 0
        lunch,//-> consider as 1
        dinner//-> consider as 2
    };

    Meal m1 = breakfast;
    cout<<m1<<endl;

    Meal m2 = lunch;
    cout<<m2<<endl;

    Meal m3 = dinner;
    cout<<m3<<endl;

    return 0;
}