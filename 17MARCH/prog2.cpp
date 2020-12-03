
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
			void greater(int a,int b,int c)
			{
				int res=a>b?(a>c?a:c):(b>c?b:c);
				cout<<"Greater : "<<res<<endl;
			}	

	};
	int main()
	{
		int a,b,c;
			cout<<"enter a,b and c : ";
			cin>>a>>b>>c;
				Greater obj;
				obj.greater(a,b);
				obj.greater(a,b,c);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
