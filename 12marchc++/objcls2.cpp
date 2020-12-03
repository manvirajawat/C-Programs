#include<iostream>
using namespace std;
class Operation
{
  public:
    void add(int a, int b)
    {
       cout<<"Sum :"<<a+b<<endl;
     }
     void sub(int a, int b)
    {
       cout<<"Sub :"<<a-b<<endl;
     }
     void mul(int a, int b)
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
   obj.add(a,b);
   obj.sub(a,b);
   obj.mul(a,b);
}
    
