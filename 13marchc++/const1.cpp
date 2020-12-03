#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Student
{
  public:
      Student()
        {
          int rno=1001;
          double per=87.98;
          char name[50]="Nitin Jha";
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
