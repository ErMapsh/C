#include <iostream>
using namespace std;

struct employe{
    int eId;
    char favChar;
    float salary;
};

int main(int argc, char const *argv[])
{
    struct employe ErMapsh;
    ErMapsh.eId = 73;
    ErMapsh.favChar = 'P';
    ErMapsh.salary = 122000000;
    cout<<ErMapsh.eId<<endl;
    cout<<ErMapsh.favChar<<endl;
    cout<<ErMapsh.salary<<endl;
    return 0;
}