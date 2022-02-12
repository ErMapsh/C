#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter Your Age:";
    cin >> age;

    // if (age > 18)
    // {
    //     cout << "You can vote" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "apply for ur Voting card as soon as poosible to vote" << endl;
    // }

    // else
    // {
    //     cout << "You cannot Vote" << endl;
    // }

    switch (age)
    {
    case 12:
        cout << "You cannot Vote" << endl;
        break;
    case 18:
        cout << "apply for ur Voting card as soon as poosible to vote" << endl;
        break;
    case 100:
        cout << "You can vote" << endl;
        break;
    default:
        cout << "Enter Correct Cases";
        break;
    }
    return 0;
}
