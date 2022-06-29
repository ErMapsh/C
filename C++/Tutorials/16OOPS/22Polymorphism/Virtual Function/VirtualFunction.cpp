#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base = 1;
        // begin virtual function
        virtual void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived = 2;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};


int main(int argc, char const *argv[])
{
    BaseClass * baseclass_pointer;
    BaseClass BObject;
    DerivedClass Dobject;

    baseclass_pointer = &Dobject;
    baseclass_pointer->display();
    return 0;
}
