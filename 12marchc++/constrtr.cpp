#include<iostream>
using namespace std;
class Const
{
  public:
    Const()
    {
       cout<<"Default Constructor Called....!!"<<endl;
    }
};
int main()
{
  Const c;        //called 1 tym
  Const c,c1,c2;     ////called 3 tym
}
