#include<iostream>
using namespace std;
class Operation
{
  private:
   int a,b;
  public:
   void setData(int a, int b)
   {
       this->a=a;
       this->b=b;
   }
    void add()
    {
       cout<<"Sum :"<<a+b<<endl;
     }
     void sub()
    {
       cout<<"Sub :"<<a-b<<endl;
     }
     void mul()
    {
       cout<<"Mul :"<<a*b<<endl;
     }
 };
 int main()
{
   Operation obj;
   int a,b;
   cout<<"Enter value of a and b :";
   cin>>a>>b;
   obj.setData(a,b);
   obj.add();
   obj.sub();
   obj.mul();
}
    
