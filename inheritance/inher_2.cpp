#include<iostream>
using namespace std;

// base class
class employee{
public:
int id;
float sal;
   employee(int inpid){
    id=inpid;
    sal=34;
   }
   employee(){
    // default constructor
   }

};

// derived class syntax
/* class {{derived class-name}} : {{visibility-mode}}  {{base class-name}}
{
    class members/methods/etc...
    NOTE:
    1:if visibility mode is public then the public class members of base class become public members of derived class
    2:if visibility mode is private then the public class members of base class become private members of derived class
    3:default visibility mode is private
    4: private members are never inherited
}

*/

// creating a programmer class derived from employee base class
class programmer:employee{
  public:
    programmer(int inpid){
        id=inpid;
    }
    int languagecode=9;
    void setdata(){
        cout<<id<<endl;
    }
};

int main()
{
    employee harry(1),ravi(2),raju(3);
    cout<<harry.sal<<endl;
    cout<<harry.sal<<endl;
    programmer skillf(12);
    //cout<<skillf.id<<endl ; //error because it becomes private due to visibility mode
    cout<<skillf.languagecode<<endl;
    skillf.setdata();
    

  return 0;
}