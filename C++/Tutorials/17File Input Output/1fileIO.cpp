#include <iostream>
#include <fstream>
using namespace std;

/*  
    in this tutorial, i gonna work with file name sample1.txt
    
    while working with file in c++, we need a header file "fstream".
    fstream header file having classes for reading or writing operation.

    These are some useful classes for working with files in C++
        fstreambase
        ifstream --> derived from fstreambase
        ofstream --> derived from fstreambas

    In order to work with files in C++, you will have to open it. Primarily,
    there are 2 ways to open a file:
        Using the constructor
        Using the member function open() of the class
*/

int main(int argc, char const *argv[])
{
    // opening file using constructer and perform write operation
    string s1 = "in these file, there are data of file name sample1.txt";
    ofstream out("sample1.txt"); // ofstream is a class-->output-fstream
    out<<s1;// out object main string insert krdo, insertion operater se
    out.close();

    // opening file using constructer and perform read operation
    string s2;
    ifstream in("sample1.txt"); // all data comming in in object;
    in>>s2; 
    cout<<s2;
    getline(in, s2);
    cout<<s2;
    in.close();
    return 0;
}
