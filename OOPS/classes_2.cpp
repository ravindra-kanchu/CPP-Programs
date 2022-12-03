#include<iostream>
#include<string>
using namespace std;
class binary{
   private:
   string s;
   //void chk_bin(void);
   public:
   void read(void);
   void chk_bin(void);
   void ones(void);
   void display(void);
};
void binary::read(void){
  cout<<"enter the binary number";
  cin>>s;
}
void binary::chk_bin(void){
    int i;
    for(i=0;i<s.length();i++){
        if(s.at(i)!='0'&& s.at(i)!='1'){
        cout<<"the given num "<<s<<" is not binary"<<endl;
        exit(0);}

    }
}
// scanf("%d",&p);
//si=(p*T*R)/100;
//printf("the interest is %f",si);
void binary::display(void){
for(int i=0;i<s.length();i++)
cout<<s.at(i);
}
void binary::ones(void){
    //chk_bin();
     for(int i=0;i<s.length();i++)  {
        if(s.at(i)=='0')
        s.at(i)='1';

        else 
        s.at(i)='0';
     }
}
int main(){
    // oops-classes and objects
    binary a;
    a.read();
    a.chk_bin();
    a.ones();
    a.display();
    return 0;
}