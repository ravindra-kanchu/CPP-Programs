#include<iostream>
#include<fstream>

using namespace std;
/*
The useful classes for writing with files in C++ are:
1.fstreambase
2.ifstream  -->derived from fstreambase
3.oftream  --->derived from fstreambase
*/
// In order work with files in c++,you will have to open it.primarily,there are 2 ways to open a file:
// 1: using constructor 
// 2: using the member function open() of the class

int main() 
{
    // opening files using constructor and writing it
  //  ofstream out("sample.txt"); write operation
    //string st="hello guru";
    //out<<st;

//     string st2;
//     ifstream in("sample.txt");  //read operation
//     //in>>st2;  it read only one word
//     getline(in,st2);
//     getline(in,st2);
//     cout<<st2;
//   return 0;

   ofstream hout("sample.txt");
    string name;
    cout<<"Enter your name";
    cin>>name;

    hout<<"My name is "<<name;
    hout.close();
  string a;
    ifstream hin("sample.txt");
    hin>>a;
    cout<<a;
    return 0;
}