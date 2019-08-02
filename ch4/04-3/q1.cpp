#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class Point
{
  int x, y;
  public:
  /*
    void Init(int x, int y)
    {
      this->x = x;
      this->y = y;
    }
*/

    Point(int x, int y)
    {
      this->x = x;
      this->y = y;
    }
    void ShowPointInfo() const
    {
      cout<<"["<<x<<", "<<y<<"]"<<endl;
    }
};

class Circle
{
  Point cen;
  int rad;

  public:
  /*
  void Init(int x, int y, int r)
  {
    cen.Init(x, y);
    rad = r;
  }
*/

  Circle(int x, int y, int r) : cen(x, y), rad(r)
  {}
  void ShowCircleInfo() const
  {
    cout<<"cen: ", cen.ShowPointInfo(), cout<<"rad: "<<rad<<endl;
  }
};

class Ring
{
  Circle in, ou;

  public:
/*
    void Init(int x1, int y1, int r1, int x2, int y2, int r2)
    {
      in.Init(x1, y1, r1);
      ou.Init(x2, y2, r2);
    }
    */

    Ring(int x1, int y1, int r1, int x2, int y2, int r2): in(x1, y1, r1), ou(x2, y2, r2)
  {}
    void ShowRingInfo() const
    {
      cout<<"Inner Circle Info.."<<endl;
      cout, in.ShowCircleInfo();
      cout<<"Outter Circle Info.."<<endl;
      ou.ShowCircleInfo();
    }
};

int main(void)
{
  Ring ring(1, 1, 4, 2, 2, 9);
 // ring.Init(1, 1, 4, 2, 2, 9);
  ring.ShowRingInfo();
  return 0;
}
   
