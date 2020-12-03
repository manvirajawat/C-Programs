#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Student
{
  private:
          int rno;
          double per;
          char name[50];
  public:
      Student()
        {
          rno=1001;
          per=58.52;
          strcpy(name,"Raja Ram Mohan");
          cout<<"Default constructor called..."<<endl;
        }
      void display()
        {
          cout<<"Name : "<<name<<endl;
          cout<<"Roll no. : "<<rno<<endl;
          cout<<"Percentage : "<<per<<endl;
        }
};

int main()
{
  Student sobj;
  sobj.display();
}
