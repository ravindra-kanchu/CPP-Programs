#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id of the employee ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void)
    {

        //cout<<id error
        cout << "the value of count is " << count << endl;
    }
};
// count is the static data member of class Employee

int Employee::count; // static variable// default val is zero
int main()
{
    Employee ravi, rohan, harry;
    // ravi.id=1;    // can not do this because id and count are private
    // ravi.count=1
    ravi.setdata();
    ravi.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    return 0;
}