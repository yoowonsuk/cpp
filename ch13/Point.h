#ifndef __POINT_H__
#define __POINT_H__

using namespace std;

class Point
{
  int x, y;

public:
  Point(int x = 0, int y = 0);
  friend ostream& operator<<(ostream& os, const Point& p);
};

#endif
