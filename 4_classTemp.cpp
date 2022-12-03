#include<iostream>
using namespace std;
template <class T>
class Har{
 public:
 T data;
 Har(T a){
    data=a;
 }
 void display();
//  void display(){
//     cout<<" Data val is "<<data<<endl;
//  }
};

template<class T>
void Har<T> ::display(){
        cout<<" Data val is "<<data<<endl;
}
void fun(int a){
    cout<<"I am first fun ()"<<a<<endl;
}

template<class T>
void fun1(T a){
    cout<<"I am fun ()"<<a<<endl;
}
int main()
{
    // // Har<float> a(8.6);
    // Har<char> a('b');
    // a.display();
    fun(3);  // first fun is called because exact match takes the highest priority
fun1(8.8);
  return 0;
}