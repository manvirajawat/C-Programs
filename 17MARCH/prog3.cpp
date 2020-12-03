
	#include<iostream>
	using namespace std;
	class Greater
	{
		public:
			Greater(int a,int b)
			{
				int res=a>b?a:b;
				cout<<"Greater : "<<res<<endl;
			}	
			Greater(int a,int b,int c)
			{
				int res=a>b?(a>c?a:c):(b>c?b:c);
				cout<<"Greater : "<<res<<endl;
			}	
			~Greater()
			{
				cout<<"Destructor called..!!"<<endl;
			}
	};
	int main()
	{
		int a,b,c;
			cout<<"enter a,b and c : ";
			cin>>a>>b>>c;
				Greater obj1(a,b),obj2(a,b,c);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
