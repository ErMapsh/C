#include <iostream>
using namespace std;

float funAvg(int x, int y)
{
    float avg = (x + y) / 2.0;
    return avg;
}

float funAvg(int x, double y)
{
    float avg = (x + y) / 2.0;
    return avg;
}
int main(int argc, char const *argv[])
{   
    /*
        abhi dekhlo ek dam, ke liye kitne fucntion banane pad rahe hai, os
        ek aisa function likhte hai, jo sabke liye chal jaye
    */ 
    cout<<"The avg is "<<funAvg(2,4)<<endl;
    cout<<"The avg is "<<funAvg(2,3.5)<<endl;
    return 0;
}