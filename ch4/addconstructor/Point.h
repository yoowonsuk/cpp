#ifndef __POINT_H__
#define __POINT_H__

class Point
{
  int x, y;

  public:
    int GetX() const;
    int GetY() const;
    bool SetX(int);
    bool SetY(int);
    //bool InitMembers(int, int);
    Point(const int &, const int &);
};

#endif
