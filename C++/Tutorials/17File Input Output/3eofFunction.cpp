#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream write; // output fstream - matlab program to file
    write.open("sample3.txt");
    write << "This is me \n";
    write << "This is me \n";
    write << "This is me \n";
    write << "This is me\ndarling\n";
    write.close();

    // but this is not right way to read a multiple line
    ifstream read; // input fstream - file to program
    string st, st2, st3;
    read.open("sample3.txt");
    getline(read, st);
    getline(read, st2);
    getline(read, st3);
    // cout<<st;
    // cout<<st2;
    // cout<<st3;
    read.close();

    // right way to read multiple lines
    ifstream readMultipleLines;
    string str;
    readMultipleLines.open("sample4.txt");
    while (readMultipleLines.eof() == 0)
    {
        // object efo return boolean value, and last line of eof return 1;
        getline(readMultipleLines, str);
        cout << str << " ----->Endof returns " << readMultipleLines.eof() << endl;
    }
    readMultipleLines.close();

    return 0;
}