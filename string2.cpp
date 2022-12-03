#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string readme="Hello,there34";
    if(!readme.empty())
    readme[0]=tolower(readme[0]);
   cout<<readme[0]<<endl;

   string str("hello there");
   decltype(str.size()) i;
   for(i=0;i!=str.size()&& !isspace(str[i]); i++)
     str[i]=toupper(str[i]);
     cout<<str<<endl;
    return 0;
}