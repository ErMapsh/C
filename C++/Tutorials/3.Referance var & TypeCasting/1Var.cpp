#include<iostream>
using namespace std;

int c = 100;
int main(int argc, char const *argv[])
{   /*
    when such a time we need a global var, but in function scope there is same local var, accessing that local var. but we need a global var. 
    that time we can accesss global var using :: operator ie. ::GlobalVariable 
    */
    int a, b, c;
    cout<<"Enter The value of a: ";
    cin>>a;
    cout<<"Enter The value of b: ";
    cin>>b;
    c= a+b;
    cout<<"The Value of local c is "<<c<<endl;
    cout<<"The Value of global c is "<<::c<<endl;

    return 0;
}
