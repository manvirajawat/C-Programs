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
  protected:
   int h;
  public:
   int volume()
    {
      return area()*h;
    }
};
class Density : public Volume
{
  private:
    double m;
  public:
   void setData(int l, int b, int h, double m)
   {
      this->l=l;
      this->b=b;
      this->h=h;
      this->m=m;
   }
  double density()
  {
    return m/volume();
  }
};
int main()
{
  int l,b,h;
  double m;
  cout<<"Enter l,b,h and m :";
  cin>>l>>b>>h>>m;
  Density d;
  d.setData(l,b,h,m);
  cout<<"Area : "<<d.area()<<endl;
  cout<<"Volume : "<<d.volume()<<endl;
  cout<<"Density : "<<d.density()<<endl;
}
