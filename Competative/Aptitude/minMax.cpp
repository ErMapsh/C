#include <iostream>
using namespace std;

void MinMax(int choice, int arr[], int n)
{

    int num = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < num && choice == 1)
        {
            num = arr[i];
        }
        else if (arr[i] > num && choice == 2)
        {
            num = arr[i];
        }
    }

    cout<<num<<endl;
}

int main(int argc, char const *argv[])
{
    int arr[8] = {11, 15, 13, 14, 10, 12, 17, 11};
    int lenghtOfArray = sizeof(arr) / sizeof(arr[0]);

    while (true)
    {
        int choice;
        cout << "1.Min\n2.Max\n3.Exit" << endl;
        cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            MinMax(1, arr, lenghtOfArray);
            break;
        case 2:
            MinMax(2, arr, lenghtOfArray);
            break;
        case 3:
            exit(1);
            break;
        default:
            cout << "Enter the Correct choice...";
            break;
        }
    }

    return 0;
}