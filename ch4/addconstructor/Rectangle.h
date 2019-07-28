#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.h"

class Rectangle
{
  Point ul, lr;

  public:
    //bool InitMembers(const Point &ul, const Point &lr);
    Rectangle(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};

#endif
