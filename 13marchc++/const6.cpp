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
           cout<<"Default construtor made bcoz object created......"<<endl;
        }
      Student(int rno, double per, char name[])
        {
          this->rno=rno;
          this->per=per;
          strcpy(this->name,name);
          cout<<"Parameterized constructor called..."<<endl;
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
  int rno;
  double per;
  char name[50];  
    cout<<"Enter name :";
    cin.getline(name,50);
    cout<<"Enter roll no. :";
    cin>>rno;
    cout<<"Enter percentage :";
    cin>>per;
  Student sobj(rno,per,name),sobj1;
  sobj.display();
}
