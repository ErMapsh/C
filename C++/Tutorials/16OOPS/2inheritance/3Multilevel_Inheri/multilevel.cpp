#include <iostream>
using namespace std;

// protected member are inhertiable but they like private members but not accessiable directly
class student
{
protected:
    int roll_no; // inheritable but not accessiable directly

public:
    void SetRollNo(int x)
    {
        roll_no = x;
    }
    int GetRollNo(void)
    {
        cout << "Roll number is " << roll_no << endl;
        return roll_no;
    }
};

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void GetMarks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};

class Result : public Exam
{
private:
    float percentage;

public:
    void DisplayResult()
    {
        GetRollNo();
        GetMarks();
        cout << "Roll Number " << roll_no << ", Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main(int argc, char const *argv[])
{

    Result r1;
    r1.SetRollNo(73);
    r1.setMarks(90.0, 94.0);
    r1.DisplayResult();
    return 0;
}