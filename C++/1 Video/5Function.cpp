#include <iostream>
using namespace std;

// square of a binomial
int squOfBinomail(int a, int b){
    int value = a*a + 2*a*b + b*b;
    return value;
}

int main(int argc, char const *argv[])

{
    int a;
    int b;
    cout<<"Enter The Number:"<<endl;
    cin>>a;

    cout<<"Enter The Number:"<<endl;
    cin>>b;
    cout << "Value of is "<<squOfBinomail(a, b);
    return 0;
}
