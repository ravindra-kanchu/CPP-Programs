#include<iostream>
using namespace std;
class complex{
  int a,b;
  public:
  // create a constructor
  // constructor is a special member function with same name as of the class.
  //It is automatically invoked(called or execute) whenever an object is created
  // it is used to initialize the objects of its class
  complex();  // constructor decleration
  void printnumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
  }
};

complex ::complex(){  // this is default constructor as it accepts no parameters
  a=10;
  b=0;
  //cout<<"hello world";  it is printed is three times a 
}
int main()
{
  // complex c;
  // c.printnumber();
   complex c1,c2,c3;
   c1.printnumber();
   c2.printnumber();
   c3.printnumber();
  return 0;
}  
// properties of constructors
// 1: It should be declared in the public seection of the class
// 2: thet are automically whenever the object is created
// 3. they cannot rteurn vlaues and do not have return types
// 4. It can have default arguments
// 5.we cannot refer to their address















