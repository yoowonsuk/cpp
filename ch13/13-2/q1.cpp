#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

template <class T>
class SmartPtr
{
  T * posptr;
public:
  SmartPtr(T* ptr): posptr(ptr)
  {}
  T& operator*() const
  {
    return *posptr;
  }
  T* operator->() const
  {
    return posptr;
  }
  ~SmartPtr()
  {
    delete posptr;
  }
};

class Point
{
  int x, y;
public:
  Point(int x = 0, int y = 0): x(x), y(y)
  {}
  void SetPos(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  void ShowPosition() const
  {
    cout<<'['<<x<<", "<<y<<']'<<endl;
  }
};

int main(void)
{
  SmartPtr<Point> sptr1(new Point(1, 2));
  SmartPtr<Point> sptr2(new Point(3, 4));
  sptr1->ShowPosition();
  sptr2->ShowPosition();
  sptr1->SetPos(10, 20);
  sptr2->SetPos(30, 40);
  sptr1->ShowPosition();
  sptr2->ShowPosition();
  return 0;
}

