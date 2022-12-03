#include <iostream>
using namespace std;
// forward decleration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};
class complex
{
  // individually declaring functions as friends
    int a, b;
    // friend int calculator::sumrealcomplex(complex o1, complex o2);
    // friend int calculator:: sumcomcomplex(complex o1,complex o2);
    
    //alter:decelaring the entire calculator class as friend
    friend class calculator;

public:
    void setnumber( int n1, int n2 )
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is" << a << " + " << b << "i" << endl;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 2);
    o1.printnumber();

    o2.setnumber(4, 5);
    o2.printnumber();

    calculator cal;
    int res = cal.sumrealcomplex(o1, o2);
    cout << "the sum of real part is " << res<<endl;
    res=cal.sumcomcomplex(o1,o2);
    cout <<"the sum of complex part is"<< res;
    return 0;
}