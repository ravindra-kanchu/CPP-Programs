#include<iostream>
using namespace std;
/*
   syntax for initialization list inconstructor:

   constructor (argument_list): intilization-section{
    assignment+ other code;
   }

class Test{
    int a;
    int b;
    public:
      Test(int i,int j): a(i),b(j){constructor body}
};
*/
class Test{
    int a;
    int b;
    public:
    //Test(int i,int j): a(i),b(j){
    //Test(int i,int j): a(i),b(i+j){
    //Test(int i,int j): b(i),a(b+j)// this will creates problem because a will be initialized first
    Test(int i,int j):a(i)
    {
        b=j;
        cout<<"constructor executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main()
{
    Test ravi(12,13);
  return 0;
}