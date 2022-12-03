#include<iostream>
#include<string>
using namespace std;
  int glo=6;
 void sum(){
   int a;
   cout<<"\n"<<glo;
 }
int main(){
    //int glo=9;
    int a=15;
    int b=90;
    float pi=3.1856;
    cout<<"this is a tutorial 4.\nhere the value of a is "<<a<<".\nthe value of b is "<<b;
    //cout<<"\n the value of pi "<<pi<<;
    sum();
    cout<<endl<<glo;
    bool is_true=true;
    cout<<endl<<is_true;
    cout<<"the of  without a is "<<a<<endl;
    cout<<"the of  without b is "<<b<<endl;
    cout<<"the of  without pi is "<<pi<<endl;

    cout<<"the of a with a is "<<setw(4)<<a<<endl;
    cout<<"the of a with b is "<<setw(4)<<b<<endl;
    cout<<"the of a with pi is "<<setw(4)<<pi<<endl;
    return 0;
}
    