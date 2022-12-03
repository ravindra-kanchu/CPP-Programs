#include<iostream>
#include<string>
using namespace std;
class CWH{
    protected:
    char title[30];
    float rating;
    public:
     CWH(string s,float r){
        strcpy(title,s);
        rating=r;
    }
    void display(){

    }
};
class CWHVedio: public CWH{
    protected:
    float vediolen;
    public:
    CWHVedio(string s,float r,float len):CWH(s,r){
       vediolen=len;
    }
    void display(){
        cout<<"The title is"<<title<<endl;
        cout<<"the rating is"<<rating<<endl;
        cout<<"the vedio length is "<<vediolen<<endl;
    }

};
class CWHtext:public CWH{
    
    int words;
    Public:
     CWHVedio(string s,float r,int wc):
};
int main()
{
  return 0;
}