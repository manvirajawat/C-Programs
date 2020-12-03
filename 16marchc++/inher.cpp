#include<iostream>
using namespace std;
class Area
{
  protected:
   int l,b;
  public:
   int area()
   {
     return l*b;
   }
};
class Volume : public Area
{
  private:
   int h;
  public:
   void setData(int l, int b, int h)
   {
      this->l=l;
      this->b=b;
      this->h=h;
   }
   int volume()
   {
     return area()*h;
   }
};
int main()
{
  int l,b,h;
  cout<<"Enter l,b and h :";
  cin>>l>>b>>h;
  Volume v;
  v.setData(l,b,h);
  cout<<"Area : "<<v.area()<<endl;
  cout<<"Volume : "<<v.volume()<<endl;
}
