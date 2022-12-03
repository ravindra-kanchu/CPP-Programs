// #include <iostream>
// using namespace std;
// class Employee
// {
//     int id;
//     int sal;

// public:
//     void setid(void)
//     {
//         sal = 200;
//         cout << "enter the id of employee " << endl;
//         cin >> id;
//     }

//     void getid(void)
//     {
//         cout << "the id of this employee is " << id << endl;
//     }
// };

// int main()
// {

//     // Employee harry,ravi,rohan,raju;
//     // harry.setid();
//     // harry.getid();

//     Employee fb[4];
//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setid();
//         fb[i].getid();
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;  
    }

    void setdata_bysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "your complex number is " << a << "+"<<b <<"i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();

    c2.setdata(3, 4);
    c2.printnumber();

    c3.setdata_bysum(c1, c2);
        c3.printnumber();

    return 0;
}