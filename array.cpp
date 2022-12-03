#include<iostream>
using namespace std;
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int n1,n2;
    int marks[4]={23,45,67,89};
    int a[5];
    a[0]=45;
    a[1]=56;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
  cout<<"enter the first number";
  cin>> n1;
  cout<<"enter the second number";
  cin>> n2;
  cout<<"the sum of two numbes is "<<sum(n1,n2);
    return 0;
}
