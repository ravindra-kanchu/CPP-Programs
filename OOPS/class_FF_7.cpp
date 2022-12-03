// #include<iostream>
// using namespace std;
// class y;
// class  x
// {
//    int data;
//    public:
//    void setdata(int val){
//     data=val;
//     }
//     friend void add(x,y);
   
// };
// class y{
//     int num;
//     public:
//     void setdata(int val){
//         num=val;
//     }
//     friend void add(x,y);
// };

// void add(x o1, y o2){
//     cout<<"summing datas of x and y objects gives me  "<<o1.data+o2.num;
// }
// int main()
// {
//   x a;
//   a.setdata(3);

//   y b;
//   b.setdata(6);

//   add(a,b);
//   return 0;
// }

#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    friend void exchange(c1 &,c2 &);
    public:
    void setdata(int val){
        a=val;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
    }
};
class c2{
    int b;
   friend void exchange(c1 &,c2 &);

    public:
    void setdata(int val1){
        b=val1;
    }
    void display(){
        cout<<"the value b is "<<b<<endl;
    }
};
   void exchange(c1 &x,c2 &y){
    // swapping done without reference variable
    int temp=x.a;
    x.a=y.b;
    y.b=temp;
   }
 
int main()
{
    c1 o1;
    c2 o2;
    o1.setdata(34);
    o2.setdata(32);
    exchange(o1,o2);
    cout<< " after swap\t";
    o1.display();
    cout<< " after swap\t";
    o2.display();
  return 0;
}