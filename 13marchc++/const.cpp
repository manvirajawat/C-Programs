#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Student
{
  public:
      Student()
        {
          int rno=0;
          double per=0;
          char name[50]="Nil";
          cout<<"Default constructor called..."<<endl;
          cout<<"Name : "<<name<<endl;
          cout<<"Roll no. : "<<rno<<endl;
          cout<<"Percentage : "<<per<<endl;
        }
};

int main()
{
  Student sobj;
}
