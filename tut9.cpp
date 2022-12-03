#include<iostream>
#include<string>
using namespace std;
int moneyreceived(int money,float int_rate=1.1){
    return money*int_rate;
}

int main(){
    int money;
   cout<<"enter your money in the bank accont";
   cin>>money;
   cout<<"the rate of interest for your"<<money <<"is"<<moneyreceived(money,1.2)<<endl;//default aruguments
  return 0;
}