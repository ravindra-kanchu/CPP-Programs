#include<iostream>
using namespace std;
class complex{
  int real;
  int img;
  public:
  void getdata(){
    cout<<"The real part is "<<real<<endl;
    cout<<"The img part is "<<img<<endl;
  }
  void setdata(int a,int b){
     real=a;
     img=b;
  }
};
int main()
{
  //complex c;
  //complex *ptr=&c;
  //(*ptr).setdata(2,3);
  //(*ptr).getdata();
  //c.setdata(2,5);
  //c.getdata();

  complex *ptr=new complex;
  //(*ptr).setdata(2,3) is same as
  ptr->setdata(3,4);
  ptr->getdata();


// array of objects
  
  complex *ptr1=new complex[4];
  ptr1->setdata(33,44);
  ptr1->getdata();

  return 0;
}