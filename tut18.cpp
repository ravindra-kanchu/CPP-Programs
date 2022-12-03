#include<iostream>
using namespace std;
 int fib(int n){
    if(n<2)
    return 1;
    else
    return fib(n-1)+fib(n-2);
 }
int fact(int num){
    if (num==0||num==1)
    return 1;
    else
    return num*fact(num-1);
}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    cout<<"the factorial of the "<<num<<"is "<<fact(num)<<endl;

    cout<<"the series is"<<fib(num)<<"\t";

    return 0;
}