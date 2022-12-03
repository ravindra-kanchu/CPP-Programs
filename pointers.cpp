#include<iostream>
using namespace std;
int main(){
    int val=10;
    int *p=&val;
    cout<<p<<endl<<*p;
    *p=20;
    cout<<endl<<val;
    val=30;
    cout<<endl<<*p;
    return 0;
}