#include<iostream>
using namespace std;
int main()
{
    //Basic example
    int a=4;
    int *ptr=&a;
    cout<<"THe vaule of a is "<<*(ptr)<<endl;
    // NEW OPERATOR
    int *p=new int(24);
    cout<<"The vaule at address p is "<<*p<<endl;

    int *arr=new int[3];
    arr[0]=10;
    //arr[1]=20;
    *(arr+1)=20;
    arr[2]=30;
    delete[] arr;
    cout<<"The vaule of arr[0]: "<<arr[0]<<endl;

    // DELETE OPERATOR


  return 0;
}