// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//     complex(int,int);
//     void printnumber(){
//         cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
//     }
// };

// complex ::complex(int x,int y){  // This is parameterized constructor
//     a=x;
//     b=y;
// }

// int main()
// {
//     //Implicit call
//     complex c(4,3);
//     c.printnumber();
//     // explicit call
//     complex d=complex(5,7);
//     d.printnumber();
//   return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void display_point(){
        cout<<"the point is ("<<x<<" , "<<y<<")"<<endl;
    }
   friend float pnt_dist(point,point);
};
// create a function which calculate distance between these pionts
  
  float pnt_dist(point p1,point p2){
      float res;
      res=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
      return res;

  }
int main()
{
    point p(2,6);
    p.display_point();
    point q(4,12);
    q.display_point();
     
     float res=pnt_dist(p,q);
     cout<<"the distance between them is "<<res;

  return 0;
}



