#include<iostream>
using namespace std;
class Addition
{
	public:
		void add(int a,int b)
		{
			cout<<"Addition of 2 variable :"<<a+b<<endl;
		}
		void add(int a,int b,int c)
		{
			cout<<"Addition of 3 varialbe :"<<a+b+c<<endl;
		}
 };
 int main()
 {
 	Addition A;
 	A.add(10,20);
 	A.add(30,40,50);
 }

