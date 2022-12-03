#include<iostream>
using namespace std;
int main()
{
    int val=1024;
    int &refval=val;
   
    cout<<"val="<<val<<endl<<"refval=" <<refval;
    refval=1000;
    cout<<endl<<"newval="<<val<<endl<<"new refval="<<refval;
    return 0;
}