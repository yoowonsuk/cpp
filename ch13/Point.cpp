#include <ostream>
#include "Point.h"

using namespace std;

Point::Point(int x, int y): x(x), y(y)
{}

ostream& operator<<(ostream& os, const Point& p)
{
  os<<'['<<p.x<<", "<<p.y<<']'<<endl;
  return os;
}
