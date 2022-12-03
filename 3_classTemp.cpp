// #include<iostream>
// using namespace std;
// template<class T1=int,class T2=float>  // default templates
// class Harry{
// public:
// T1 a;
// T2 b;
// Harry(T1 x,T2 y){
//     a=x;
//     b=y;
// }
//     void dis(){
//         cout<<" a is "<<a<<endl;
//         cout<<" b is "<<b<<endl;
//     }

// };
// int main()
// {
//     Harry<> h(4,6.4);
//     h.dis();
//     Harry<int,int> h1(1,2);

//     h1.dis();
//   return 0;
// }
#include<iostream>
using namespace std;
template<class T1,class T2>

float avg(T1 a,T2 b){
    float r= (a+b)/2.0;
    return r;
}
template<class T>
void swapp(T &a,T &b)
{
    T t=a;
    a=b;
    b=t;
}

int main(){
    float r=avg(3.4,4.6);
    cout<<"average is "<<r<<endl;
  int x=5,y=8.9;
  swapp(x,y);
  cout<<"x is " <<x<<endl;
  cout<<"y is " <<y<<endl;

}