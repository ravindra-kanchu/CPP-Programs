#include<iostream>
using namespace std;
class A{
    int a;
    public:
    int b;
    void get_ab();
    int get_a();
    void show();
};

void A:: get_ab(){
    cout<<"enter a,b vlaues"<<endl;
    cin>>a>>b;
}
int A:: get_a(){
    return a;
}
class B:private A{
    private:
    int c;
    public:
    void mul();
    void display();
};
void B:: mul(){
    get_ab();
c=b*get_a();
}
void B:: display(){

  cout<<"the multiplication of two numbers"<<c<<endl;
}
int main()
{
    B obj;
    obj.mul();
    obj.display();
  return 0;
}