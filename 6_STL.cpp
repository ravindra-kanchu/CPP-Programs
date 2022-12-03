#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; // list of 0 length
    //list<int> list2(3); // empty list of size 7
    list1.push_back(5);
    list1.push_back(52);
    list1.push_back(51);
    list1.push_back(54);
    list1.push_back(15);

    display(list1);

    // list<int> :: iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter;
    list<int> list2(3);

    list<int>:: iterator it;
    it=list2.begin();
    *it=3;
    it++;
    *it=4;
    it++;
    *it=5;
    display(list2);

  return 0;
}