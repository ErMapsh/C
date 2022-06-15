#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = breakfast;
    cout<<m1<<endl;

    Meal m2 = lunch;
    cout<<m2<<endl;

    Meal m3 = dinner;
    cout<<m3<<endl;

    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;
    return 0;
}