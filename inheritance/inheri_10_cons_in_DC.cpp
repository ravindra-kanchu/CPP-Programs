/*
constructors in derived class
1:we can use constructor in derived in c++
2:if base class constructor does not have any arguments,there is no nedd of any constructor in derived class
3: But if there are one or more arguments in the base class constructor ,derived class need to pass arguments to 
   the base class constructor
4:if both base class and derived class have constructors,base class constructor is executed first
5:in multiple inheritance,base classes are constructed in the order in which they appear in the class decleration
6: in multilevel,the constructors are executed in the order of inheritance


// the constructors for virtual base classes are invoked before an nonvirtual base classes
// if there are multiple virtual base classes,they are invoked in the order declered
// any non-virtual base class are then constructed before the derived class constructor is executed

*/

 #include<iostream>
using namespace std;
/*
  Case1:
  Class B:public A{
    // order of execution of constructor -> first A() and then B()
  };

  Case2:
  class A: public B,public C{
    //order of execution of constructor ->B() then C() and A()

  };

  Case3:
  class A: public B,virtual public C{
    //order of execution of constructor ->C() then B() and A()
  };
*/
class Base1{
  int data1;
  public:
  Base1(int i){
    data1=i;
    cout<<"Base 1 constructor is called"<<endl;
  }
  void printdatabase1(){
    cout<<"The vaule of data1 is "<<data1<<endl;
  }
};
class Base2{
  int data2;
  public:
  Base2(int i){
    data2=i;
    cout<<"Base 2 constructor is called"<<endl;
  }
  void printdatabase2(){
    cout<<"The vaule of data1 is "<<data2<<endl;
  }
};

class Derived :public Base1,public Base2{
  int derived1,derived2;
  public:
  Derived(int a,int b,int c,int d):Base1(a),Base2(b){
    derived1=c;
    derived2=d;
    cout<<"The derived class is called"<<endl;
  }
  void printdataderived(){
    cout<<"The vaule of derived 1 is "<<derived1<<endl;
    cout<<"The vaule of derived 2 is "<<derived2<<endl;
  }
};
int main()
{
  Derived ravi(1,2,3,4);
  ravi.printdatabase1();
  ravi.printdatabase2();
  ravi.printdataderived();

  return 0;
}