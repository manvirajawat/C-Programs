#include<iostream>
using namespace std;
int a,b;
void add()
{
  int c=a+b;
  cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<endl;
}
int main()
{
  cout<<"Enter value of a and b :";
  cin>>a>>b;
  add(); 
}
