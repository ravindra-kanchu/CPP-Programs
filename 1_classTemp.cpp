#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
     //int *arr;
     T *arr;
     int size;
     vector(int n){
        size=n;
        //arr=new int[size];
        arr=new T[size];
     }
     T dotproduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d +=this->arr[i]*v.arr[i];   // without using two in dotproduct fun we can access v1 eles by this operator;
        }
        return d;
     }

};
int main()
{
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=1;
    //  vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;

     vector<float> v1(3);
    v1.arr[0]=4.3;
    v1.arr[1]=3.3;
    v1.arr[2]=1.11;
     vector<float> v2(3);
    v2.arr[0]=1.3;
    v2.arr[1]=0;
    v2.arr[2]=1.89;
    
    float a=v1.dotproduct(v2);
    cout<<a<<endl;
  return 0;
}