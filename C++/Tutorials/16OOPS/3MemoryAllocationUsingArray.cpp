#include <iostream>
using namespace std;

class shop
{
private:
    // default is private
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void InitialCounter(void) { counter = 0; }
    void setItem(void);
    void Display(void);
};

void shop::setItem()
{
    cout << "Enter The Id of Item " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter The price of Item " << counter + 1 << ": ";
    cin >> itemPrice[counter];
    counter++;
}

void shop::Display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Item ID is " << itemId[i] << " and "
             << "The Item Price is " << itemPrice[i] << "." << endl;
    }
}

int main(int argc, char const *argv[])
{
    shop dukkan;
    dukkan.InitialCounter();
    dukkan.setItem();
    dukkan.setItem();
    dukkan.Display();
    return 0;
}