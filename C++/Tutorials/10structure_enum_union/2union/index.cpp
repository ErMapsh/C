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
    */
    cout<<m1.car<<endl;
    return 0;
}