#include<iostream>
using namespace std;
class Rectangle
{
	int L,B;
	public:
	Rectangle()
	{
		L=0;
		B=0;
	}
	void operator++()
	{
		L+=2;
		B+=2;
	}
	void display()
	{
		cout<<"Length :"<<L<<endl;
		cout<<"Breadth :"<<B<<endl;
	}
};
int main()
{
	Rectangle R;
  cout<<"Before assigning :"<<endl;
  R.display();
  ++R;
  cout<<"After assisgning"<<endl;
  R.display();
}
