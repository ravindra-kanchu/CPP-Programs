#include<iostream>
#include<math.h>
using namespace std;
class simple_cal{
    protected:
    int a;
    int b;
    public:
    void utility(int x,int y){
        a=x;
        b=y;
    }
    void cal_res(){
        cout<<"addition is "<<a+b<<endl;
        cout<<"subtraction is "<<a-b<<endl;
        cout<<"multiplication is "<<a*b<<endl;
        cout<<"division is "<<a/b<<endl;
    }

};
class scientific_cal{
    protected:
    int a1,b1;
    public:
    void utility1(int x,int y){
        a1=x;
        b1=y; 
}
void cal1(){
    cout<<"in cos  " <<cos(a1)+cos(b1)<<endl;
    cout<<" in sqrt "<<sqrt(a1)+sqrt(b1)<<endl;
    cout<<" in sin "<<sin(a1)+sin(b1)<<endl;
    cout<<" in tan "<<tan(a1)+tan(b1)<<endl;
}
};

class hybird: public simple_cal,public scientific_cal{
    public:
    void display(){
        cal_res();
        cal1();
    }

};
int main()
{
    hybird h;
    h.utility(30,52);
    h.utility1(60,52);
    h.display();
  return 0;
}