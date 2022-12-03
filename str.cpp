#include<iostream>
#include<string>
using namespace std;
int main(){
    string readme="Hello,there34";
    for(auto ch:readme)
    cout<<ch<<endl;
    string str("Hello,There!!!");
    int punch_count=0;
    for(auto ch:str)
    {
        if(ispunct(ch))
        punch_count++;
    }
    cout<<"the number of punchs in\t"<<str<<"="<<punch_count<<endl;
    for(auto &ch:readme) 
      ch=toupper(ch);
    cout<<readme;
    return 0;
}