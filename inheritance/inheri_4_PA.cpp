#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};
class derived: protected base{

};            

/*      For a protected member     

                      public mode              private mode               protected mode          
    1.private          not inherited           not inherited              not inherited
    2.protected        protected                private                    protected
    3.public            public                  private                    protected
*/
int main()

{
    base b;
    derived d;
    //cout<<b.a;  // it becomes protected in base and derived  class so it can't access  it can access through member functions
    //cout<<d.a;
  return 0;
}