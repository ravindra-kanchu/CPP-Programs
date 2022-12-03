#include<iostream>
using namespace std;

class Shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
        void initcounter(void) {counter=0;}
        void setprice(void);
        void displayprice(void);
};

void Shop::setprice(void){
    cout<<"enter the id of your item no "<<counter+1<<endl;
    cin>>itemid[counter];
     cout<<"enter the price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;

}

void Shop:: displayprice(void){
    for (int i=0;i<counter;i++){
        cout<<"the price of item with id "<<itemid[i]<< " is "<<itemprice[i]<<endl;
    }
}
int main(){
Shop dukan;
dukan.initcounter();
dukan.setprice();
dukan.setprice();
dukan.setprice();
dukan.displayprice();
dukan.displayprice();
dukan.displayprice();
    return 0;
}