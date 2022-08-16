#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    bool flag = true;
    while (true)
    {
        int choice;

        cout << "\n1.press\n2.exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (flag == true)
            {
                flag = false;
            }
            else if (flag == false)
            {
                flag = true;
            }

            cout << "Clicked and vlaue is " << flag << endl;
            break;
        case 2:
            exit(1);
            break;
        default:
            cout << "Enter the Correct choice...";
            break;
        }
    }

    return 0;
}