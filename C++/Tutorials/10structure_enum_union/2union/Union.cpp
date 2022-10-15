#include <iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(int argc, char const *argv[])
{
    union money m1;
    m1.car = 'c';
    /*
        if i set here another data type of money, i will get garbage value of car

        if i set car value 
        then another values are become garbage value

        we can setup only one value at a time
    */
    cout<<m1.car<<endl;
    cout<<m1.pounds<<endl;
    cout<<m1.car<<endl;
    return 0;
}