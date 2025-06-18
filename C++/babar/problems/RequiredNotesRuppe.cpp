#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // how many notes required:
    int _1000 = 0, _500 = 0, _200 = 0, _100 = 0, _50 = 0, _20 = 0, _10 = 0, _5 = 0, _1 = 0;

    while (n != 0)
    {
        int value = 0, count = 0;
        if (n >= 1000)
        {
            value = 1000;
            // count = n / 1000;
            // n = n - 1000 * count;
        }
        else if (n >= 500)
        {
            value = 500;
            // count = n / 500;
            // n = n - 500 * count;
        }
        else if (n >= 200)
        {
            value = 200;
            // count = n / 200;
            // n = n - 200 * count;
        }
        else if (n >= 100)
        {
            value = 100;
            // count = n / 100;
            // n = n - 100 * count;
        }

        else if (n >= 50)
        {
            value = 50;
            // count = n / 50;
            // n = n - 50 * count;
        }
        else if (n >= 20)
        {
            value = 20;
            // count = n / 20;
            // n = n - 20 * count;
        }
        else if (n >= 10)
        {
            value = 10;
            // count = n / 10;
            // n = n - 10 * count;
        }
        else if (n >= 5)
        {
            value = 5;
            // count = n / 5;
            // n = n - 5 * count;
        }
        else if (n >= 1)
        {
            value = 1;
            // count = n / 1;
            // n = n - 1 * count;
        }
        count = n / value;
        n = n - value * count;

        switch (value)
        {
        case 1000:
            _1000 += count;
            break;

        case 500:
            _500 += count;
            break;

        case 200:
            _200 += count;
            break;

        case 100:
            _100 += count;
            break;

        case 50:
            _50 += count;
            break;

        case 20:
            _20 += count;
            break;

        case 10:
            _10 += count;
            break;

        case 5:
            _5 += count;
            break;

        case 1:
            _1 += count;
            break;
        case 0:
            goto print;
        default:
            break;
        }
    }

print:
    cout << "1000 = " << _1000 << endl;
    cout << "500 = " << _500 << endl;
    cout << "200 = " << _200 << endl;
    cout << "100 = " << _100 << endl;
    cout << "50 = " << _50 << endl;
    cout << "20 = " << _20 << endl;
    cout << "10 = " << _10 << endl;
    cout << "5 = " << _5 << endl;
    cout << "1 = " << _1 << endl;
    return 0;
}