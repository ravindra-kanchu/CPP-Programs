
// CONSTRUCTOR WITH DEFAULT ARGUMENTS
#include<iostream>
using namespace std;

class simple{
    int d1;
    int d2;
    public:
    void  printdata();
   // simple(int a,int b)
     simple(int a, int b=9,int c=8)
    {
        d1=a;
        d2=b;
    }

    //void  printdata();
};

void simple :: printdata()
{
    cout<<"the val of data is "<<d1<<" and "<<d2<<endl;
}

int main()
{
    //simple s(1,4);
    simple s(1);
    s.printdata();
    return 0;
}
