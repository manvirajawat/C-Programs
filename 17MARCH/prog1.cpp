
	#include<iostream>
	using namespace std;
	class A
	{
		public:
			void a()
			{
				cout<<" a() method of class A"<<endl;
			}
	};
	class B : public A
	{
		public:
			void b()
			{
				cout<<" b() method of class B"<<endl;
			}
	};
	class C 
	{
		public:
			void c()
			{
				cout<<" c() method of class C"<<endl;
			}
	};
	class D : public B, public C 
	{
		public:
			void d()
			{
				a();
				b();
				c();
				cout<<" d() method of class D"<<endl;
			}
	};

	int main()
	{
		D obj;
		obj.d();	
	}
