// STANDARD  TEMPLATES LIBRARY
// generic classes and functions
//stl-> reuse: well tested components 
                // time saving

/*
  componnets of stl 1: containers -> stores data by using template classes
                    2: algorithms -> sort ,search use template functions
                    3: iterators  -> object points to an element of a container

*/  

/*
   containers are 3 types 1:sequence containers   -> stores data in linear manner(vector,list,dequeue)
                          2:associative containers -> direct access (map,set,dict,multi map)(tree,graph)
                          3: derived containers   -> real world modelling (stack,queue,priority queue)
*/                                                  

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
          for (int i = 0; i < v.size(); i++)
          {
            cout<<"The " <<i+1<< "ele is"<<v[i]<<"\t";
            cout<<endl;
          }
          cout<<endl;
}
int main()
{
    vector<int> vec1;  // zero length vector
    vector<char> vec2(4);
    vector<char> vec3(vec2);  // 4 ele character vector from vec2
    vector<int> v(6,4);      // 4 ele copied 6 times



    int ele,size;
    cout<<"enter the size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element "<<i+1<<" ";
        cin>>ele;
        vec1.push_back(ele);     // push_back is a method to add ele in the vector vec1
    }
    // vec1.pop_back();
      display(vec1);
      vector<int> :: iterator iter = vec1.begin();
      vec1.insert(iter,50,555);  // 555 is copied at the begin 50 times
      display(vec1);
      return 0;
}