#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void setRollNo()
    {
        cout << "Enter Your Roll No:";
        cin >> roll_no;
    }
    void showRollNo()
    {
        cout << "Student Roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void SetTestMarks(int x, int y)
    {
        math = x;
        physics = y;
    }
    void ShowTestmarks()
    {
        cout << "The marks in maths and physics respectively is " << math << " and " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    float sportMark;

public:
    void setSportMark(int x)
    {
        sportMark = x;
    }

    void showSportMarks()
    {
        cout << "The sport marks is " << sportMark << endl;
    }
};

class Result : public Test, public Sport
{
private:
    float total;

public:
    void Display()
    {
        total = math + physics + sportMark;
        showRollNo();
        ShowTestmarks();
        showSportMarks();
        cout << "Your total score is: " << total << endl;
    }
};

int main(int argc, char const *argv[])
{
    Result ra1;
    ra1.setRollNo();
    ra1.SetTestMarks(80, 74);
    ra1.setSportMark(7);
    ra1.Display();
    return 0;
}