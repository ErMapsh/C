#include <iostream>
#include <fstream>
using namespace std;

// in this tutorial, i gona work with file name sample1.txt
/*
    syntax for getline(object_of_ifstream, string_var);

*/
int main(int argc, char const *argv[])
{
    string s1, s2;
    // -------write operation in file-------
    ofstream write("sample2.txt");
    cout << "Enter your name: ";
    cin >> s1;
    write << s1 + " is My name";
    write.close();

    // -------Read operation-------
    ifstream read("sample2.txt");
    // read>>s2;
    // cout<<s2;
    getline(read, s2); // to get line
    cout << s2;
    read.close();
    return 0;
}