#include<iostream>
using namespace std;
/*
 multiple templates
  syntax: template<class T1,class T2>


*/
template <class T1,class T2>
class Exe{
    public:
      T1 data1;
      T2 data2;
    //   exe(){
    //     data1=7;
    //     data2=1.8;
    //   }
      Exe(T1 a; T2 b){
        data1=a;
        data2=b;
      }
      void display(){
        cout<<this->data1<<this->data2<<endl;
      }
};
int main()
{
    Exe <int,float> a(1,1.8)
    a.display();

  return 0;
}