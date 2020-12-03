#include<iostream>
using namespace std;

namespace mySpace1
{
  int a=10;
}

namespace mySpace2
{
  int a=20;
}

/*using namespace mySpace1;
int main()
{
  cout<<"Value of a :"<<a<<endl;
}*/

/*using namespace mySpace2;
int main()
{
  cout<<"Value of a :"<<a<<endl;
}*/
  
int main()
{
  cout<<"Value of a in 1st namespace :"<<mySpace1::a<<endl;
  cout<<"Value of a in 2nd namespace :"<<mySpace2::a<<endl;
}

