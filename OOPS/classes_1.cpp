#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void set_data(int a,int b,int c);
    void get_data()
    {
        cout<<"the value of a is "<<a<<endl;        
        cout<<"the value of b is "<<b<<endl;        
        cout<<"the value of c is "<<c<<endl;        
        cout<<"the value of d is "<<d<<endl;        
        cout<<"the value of e is "<<e<<endl;        

    }
};
void employee::set_data(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main(){
   employee harry;
  // harry.a=90;   we cant access private var directly we access through class methods
   harry.d=33;
   harry.e=45;
   harry.set_data(1,2,4);
   harry.get_data();
   return 0;
}