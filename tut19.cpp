#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using fun with two agruments"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<"using fun with 3 agruments"<<endl;
    return a+b+c;
}
// calculate the volume of cylinder
  int vol(double r,int h){
    return (3.14*r*r*h);
  }
    
int vol(int a){
    return (a*a*a);
}
 int vol(int a,int b,int c){
    return (a*b*c);
 }
int main(){
     cout<<"the sum of 3 and 7 is"<<sum(3,7)<<endl;
     cout<<"the sum of 3 and 8 and 5is "<<add(3,8,5)<<endl;
     cout<<"the volume of cuboid is "<<vol(3,4,5)<<endl;
     cout<<"the volume of square is "<<vol(5)<<endl;
     cout<<"the volume of cylinder is "<<vol(3,5)<<endl;
     return 0;

}