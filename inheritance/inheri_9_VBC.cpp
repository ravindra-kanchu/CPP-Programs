#include<iostream>
using namespace std;
/*
Student--->Test
Student--->Sports
Test--->Result
Sports-->Result
*/

class Student{
    protected:
    int ro_no;
    public:
    void set_num(int a){
        ro_no=a;
    }
    void print_num(){
        cout<<"His/her roll number is"<<ro_no<<endl;
    }
};
class Test:virtual public Student{
  protected:
  float maths,physics;
  public:
  void set_marks(float a,float b){
    maths=a;
    physics=b;
  }
  void print_marks(){
    cout<<"student test marks"<<endl;
    cout<<"maths score is"<<maths<<endl;
    cout<<"physics score is"<<physics<<endl;
  }
};
class Score:virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
           score=sc;
    }
    void print_score(){
        cout<<"PT sore is"<<score<<endl;
    }
};
class Result: public Test,public Score{
    private:
    float result;
    public:
    void scored(){
        result=maths+physics+score;
        print_num();
        print_marks();
        print_score();
        cout<<"The total marks scored is"<<result<<endl;
    }
};
int main()
{
    Result ravi;
    ravi.set_num(456);
    ravi.set_marks(98.54,86.98);
    ravi.set_score(45.5);
    ravi.scored();

  return 0;
}