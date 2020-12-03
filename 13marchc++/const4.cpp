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
          cout<<"Enter name :";
          cin.getline(name,50);
          cout<<"Enter roll no. :";
          cin>>rno;
          cout<<"Enter percentage :";
          cin>>per;
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
