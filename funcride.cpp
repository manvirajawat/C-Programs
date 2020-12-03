#include<iostream>
using namespace std;
class base
{
	public:
	void show()
	{
		cout<<"Base class show called"<<endl;
	}
};
class derived:base
{
	public:
	void show()
	{
		cout<<"Derived class show called"<<endl;
	}
};

int main()
{
	base b;
	derived d;
	b.show();
	d.show();
  
}

