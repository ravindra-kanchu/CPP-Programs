#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
    friend complex add(complex, complex);
    // friend keyword + function name with actual return type
    //above line means that non member add function is allowed to do anything with my private parts(data)
};

complex add(complex c1, complex c2)
{
    complex c;
    c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
    return c;
    // c.setnumber((c1.a+c2.a),(c1.b+c2.b));
    // return c;
}

int main()
{
    complex c1, c2;
    c1.setnumber(1, 4);
    c1.printnumber();
    c2.setnumber(5, 6);
    c2.printnumber();
    complex sum = add(c1, c2);
    sum.printnumber();

    return 0;
}


/*  properties of friend functions
  1. not in the scope of the class
  2. since it is not in the scope of the class,it cannot be called from the object of that class.
  c1.add()==invalid
  3.can be invoked without the help of any object
  4.usually contains the  objects as agruments
  5.can be decleared in private or public section
  6.it can access the members directly by their names and need object name,member name to access any member.
  
*/