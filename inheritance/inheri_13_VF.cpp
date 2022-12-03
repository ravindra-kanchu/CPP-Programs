// #include<iostream>
// using namespace std;
// class Base{
//   public:
//   int var;
//   void display(){
//     cout<<"Displaying Base class variable var base "<<var<<endl;
//   }
// };
// class Derived: public Base{
// public:
//   int var1;

//   void display(){
//     cout<<"Displaying Base class variable var1 derived"<<var1<<endl;
// };

// int main()
//   {
//     Base *base_class_ptr;
//     Base obj_base;
//     Derived obj_derived;
//     base_class_ptr=&obj_derived;  // pointer of base class can pointed to the derived class
//     base_class_ptr->var=56;
//     base_class_ptr->display();
//     return 0;
//   }
//     //polymorphism
//     // -one name and multiple forms
//     // -eg.Function and operator overloading
//     // two types 1:compile time pm 2: run time pm
//     // com time pm 1:FO 2: OO
//     // run time pm (virtual functions)

#include<iostream>
using namespace std;
class Base{
  public:
  int var;
  void display(){
    cout<<" 1:Displaying Base class variable var base "<<var<<endl;
  }
};
class Derived: public Base{
public:
  int var1;

  void display(){
    cout<<" 2:Displaying Base class variable var derived"<<var<<endl;
    cout<<" 2:Displaying Base class variable var1 derived"<<var1<<endl;
    
};
int main(){
    Base *base_ptr;
    Base base_obj;
    Derived derived_obj;
    base_ptr=&derived_obj;
    base_ptr->display();
    return 0;
}