#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"The id of item is"<<id<<endl;
        cout<<"The price of the item is "<<price<<endl;
    }
};
int main()
{
    int size=3;
    //int *ptr=&size;
    //int *ptr1=new int [size];
    Shop *ptr=new Shop [size];
    Shop *ptrtemp=ptr;
    int p;
    float q;
    for ( int i = 0; i <size; i++)
    {
        cout<<"Enter the id and price of the item"<<endl;
        cin>>p>>q;
       // (*ptr).setdata(p,q);
       ptr->setdata(p,q);
       ptr++;
    }
    for (int i = 0; i <size; i++)
    {
        cout<<"Item number:"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
  return 0;
}