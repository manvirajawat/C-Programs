#include<iostream>
using namespace std;
class Parent
{
  public:
  void show()
  {
    cout<<"!!..Show of parent class..!!"<<endl;
  }
};
class Child1 : public Parent
{
   public:
   void display()
   {
       cout<<"!!..Display of child1 class..!!"<<endl; 
       show(); 
   }
};
class Child2 : public Parent
{
   public:
   void draw()
   {
       cout<<"!!..Draw of child2 class..!!"<<endl;  
   }
};
int main()
{
  
  Child1 c1;
  Child2 c2;
  c1.display();
  c2.draw();
  c2.show();
}
