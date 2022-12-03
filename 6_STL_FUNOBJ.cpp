// #include<iostream>
// #include<functional>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     // function objects(Functor): function wrapped in a class so that it available like an object() 
//     int arr[]={1,73,64,12,11,23,42,5};

//     sort(arr,arr+8);
//     sort(arr,arr+8,greater<int>());
//     for (int i = 0; i < 8; i++)
//     {
//     cout<< arr[i]<<" ";
    
//     }
    
//   return 0;
// }

                       //////////// MAPS/////////////////  cpp reference.com

#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
  return 0;
  map<string,int> marksmap;
  marksmap["ravi"]=98;
  marksmap["ram"]=48;
  marksmap["raj"]=68;
  marksmap["rajesh"]=98;

  map<string,int> :: iterator it;
  for (it=marksmap.begin(); it!=marksmap.end(); it++)
  {
     cout<<(*it).first<<" "<<(*it).second<<"\n";  // first-> key and second ->item
  }
  

}