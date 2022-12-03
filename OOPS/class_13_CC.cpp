// COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    // when no copy constructor is found ,compiler supplies its own constructor
    number(number &obj){
        cout<<"cpoy constructor called"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{
    number x,y,z(67);
    x.display();
    z.display();
    number z1(z);  // copy constructor invoked
    z1.display();
    //z2=z;         // copy constructor not called


    number z3=z;  // copy constructor invoked
    z3.display();
    // z1 should exactly resembles z or x or y
  return 0;
}