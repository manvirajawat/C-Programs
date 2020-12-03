
	#include<iostream>
	using namespace std;
	class Greater
	{
		public:
			void greater(int a,int b)
			{
				int res=a>b?a:b;
				cout<<"Greater : "<<res<<endl;
			}	
			void greater(double a,double b)
			{
				double res=a>b?a:b;
				cout<<"Greater : "<<res<<endl;
			}	
	};
	int main()
	{
		int a,b;
		double c,d;
			cout<<"enter a,b,c and d : ";
			cin>>a>>b>>c>>d;
				Greater obj;
				obj.greater(a,b);
				obj.greater(c,d);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
