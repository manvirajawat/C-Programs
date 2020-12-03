#include<iostream>
using namespace std;
class Addition
{
  public:
    void add(int a, int b)
    {
       cout<<"Sum :"<<a+b<<endl;
     }
 };
 int main()
{
   Addition obj;
   int a,b;
   cout<<"Enter value of a and b :";
   cin>>a>>b;
   obj.add(a,b);
}
    
