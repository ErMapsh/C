#include <iostream>
#include <malloc.h>
#include <string.h> // for string
using namespace std;

struct FriendList
{
    string name;
    int age;
    float salary;
};



int main(int argc, char const *argv[])
{
    struct FriendList *MyArray = (FriendList *)malloc(3 * sizeof(FriendList));
    MyArray[0].name = "shubham";
    MyArray[0].age = 27;
    MyArray[0].name = 200000;
    return 0;
}