#include<iostream>
using namespace std;
class A{
  int a;
  public:
  void setdata(int a){
    this->a=a;
  }
  void getdata(){
    cout<<"The vaule of a is "<<a<<endl;
  }
};
int main()
{
    // this is a keyword which is a pointer which pionts to the object which is invokes
    // the member function
    A a;
    a.setdata(10);
    a.getdata();
  return 0;
}