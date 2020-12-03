#include<iostream>
using namespace std;

namespace mySpace1
{
  int a=10;
  void show()
  {
    cout<<"Show value of a in mySpace1 :"<<a<<endl;
  }
}

namespace mySpace2
{
  int a=20;
  void show()
  {
    cout<<"Show value of a in mySpace2 :"<<a<<endl;
  }
}

/*using namespace mySpace1;
int main()
{
  show();
}*/

/*using namespace mySpace2;
int main()
{
  show();
}*/
  
int main()
{
  mySpace1::show();
  mySpace2::show();
}

