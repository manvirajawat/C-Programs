
			#include<iostream>
			using namespace std;
			class Parent
			{
				public:
					void show()
					{
						cout<<"show of parent"<<endl;
					}
			};		
			class Square : public Parent
			{
				public:
					void show()
					{
						cout<<"show of square"<<endl;
					}	
			};
			class Circle : public Parent
			{
				public:
/*					void show()
					{
						cout<<"show of circle"<<endl;
					}	
*/			};

			int main()
			{
				Square s;
				s.show();
				
				Circle c;
				c.show();
			}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
