#include <iostream>
using namespace std;
class base1
{
protected:
  int varbase1;

public:
  void setbase1(int b1)
  {
    varbase1 = b1;
  }
};
class base2
{
protected:
  int varbase2;

public:
  void setbase2(int b2)
  {
    varbase2 = b2;
  }
};

class base3
{
protected:
  int varbase3;

public:
  void setbase3(int b3)
  {
    varbase3 = b3;
  }
};
/*
  syntax for inheriting for multiple inheritance
  class derived class :visibility mode base 1,visibility mode base 2{
    class body of derived
  }
  In inherited derived class we look something like this:
  Data member:
    varbase1--->protected
    varbase2--->protected
  Member functions:
    setbase1()--->public
    setbase2()--->public
    display()---->public
*/
class derived : public base1, public base2, public base3
{
protected:
 
public:
  void display()
  {
    cout << "The val of base1 is " << varbase1 << endl;
    cout << "The val of base2 is " << varbase2 << endl;
    cout << "The val of base3 is " << varbase3 << endl;
    cout << "The val  is " << varbase1 + varbase2 << endl;
  }
};

int main()
{
  derived d;
  d.setbase1(28);
  d.setbase2(2);
  d.setbase3(7);
   d.display();
  return 0;
}