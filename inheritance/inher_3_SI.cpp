// #include<iostream>
// using namespace std;
// class base{
//   int data1;  // private by default and it is not inheritable
//   public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();

// };
// void base:: setdata(){
//     data1=10;
//     data2=20;
// }
// int base::getdata1(){
//     return data1;
// }
// int base::getdata2(){
//     return data2;
// }

// class derived: public base{  // class is derived publically
// int data3;
// public:
//     void process();
//     void display();
// };
// void derived::process(){
//     data3=data2*getdata1();  // we don't write data1 because it is private it can be access through member functions
// }
// void derived ::display(){
//     cout<<"the value of data1 is "<<getdata1()<<endl;
//     cout<<"the value of data2 is "<<data2<<endl;
//     cout<<"the value of data3 is "<<data3<<endl;
// }
// int main(){
//     derived s;
//     s.setdata();
//     s.process();
//     s.display();
//   return 0;
// }

#include <iostream>
using namespace std;
class base
{
    int data1; // private by default and it is not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : private base
{ // class is derived privately
    int data3;

    public:
        void process();
        void display();
    
};
void derived::process()
{
     setdata();
     data3 = data2 * getdata1(); // we don't write data1 because it is private it can be access through
}
void derived ::display()
{

    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
    derived s;
    // s.setdata(); then its becomes private to inheritance so we can't access them
    s.process();
    s.display();
    return 0;
}
