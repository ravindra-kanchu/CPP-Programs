#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r);
    void getdata();
};
void student::set_roll_no(int r)
{
    roll_no = r;
}
void student::getdata()
{
    cout << "the roll no of student is " << roll_no << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks();
};
void exam::setmarks(float m, float p)
{
    maths = m;
    physics = p;
}
void exam::getmarks()
{
    cout << "maths marks is " << maths << endl;
    cout << "physics marks  is " << physics << endl;
}

class result : public exam
{
    protected:
    float avg;
    public:
    void display()
    {
        getdata();
        getmarks();
        cout << "the average is " << (maths + physics) / 2 << endl;
    }
};
/*
    NOTES:
    1.If we are inheriting B from A and C from B :[A---->B---->C]
    2.A is base class for B abd B is the base class for C
    3.ABC  is called Inheritance path

*/

int main()
{
    result ravi;
    ravi.set_roll_no(420);
    ravi.setmarks(89.5,87.65);
    ravi.display();

    return 0;
}