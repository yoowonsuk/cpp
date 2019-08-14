#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

template <class T>
void SwapData(T& d1, T& d2)
{
  T temp = d1;
  d1 = d2;
  d2 = temp;
}

class Point
{
  int x, y;

public:
  Point(int x = 0, int y = 0): x(x), y(y)
  {}
  void ShowPosition() const
  {
    cout<<'['<<x<<", "<<y<<']'<<endl;
  }
};

int main(void)
{
  Point p1(1, 3), p2(2, 4);
  SwapData(p1, p2);
  p1.ShowPosition();
  return 0;
}

