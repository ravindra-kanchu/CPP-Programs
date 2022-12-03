// DYNAMIC INITILIZATION OF OBJECTS
#include<iostream>
using namespace std;
class bankdepo{
    int principal;
    int years;
    float interest_rate;
    float returnval;
    public:
    bankdepo(){}
    bankdepo(int p,int y,float r);
    bankdepo(int p,int y,int r);
    void show();
};
bankdepo::bankdepo(int p,int y,float r){
    principal=p;
    years=y;
    interest_rate=r;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
       returnval=returnval*(1+interest_rate);   
    }
}
bankdepo::bankdepo(int p,int y,int r){
    principal=p;
    years=y;
    interest_rate=float(r)/100;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
       returnval=returnval*(1+interest_rate);   
    }
}
void bankdepo::show(){
    cout<<endl<<"principal amount was "<<principal
    <<"return val after"<<years<<" years"
    <<" is "<<returnval<<endl;
}
int main()
{
    bankdepo bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the val of p,y,r"<<endl;
    cin>>p>>y>>r;
   bd1=bankdepo(p,y,r);
   bd1.show();

    cout<<"enter the val of p,y,R"<<endl;
    cin>>p>>y>>R;
   bd2=bankdepo(p,y,R);  
   bd2.show();
  return 0;
}