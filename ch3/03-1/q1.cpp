#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

struct Point
{
  int x, y;

  void MovePos(int a, int b)
  {
    x += a;
    y += b;
  }

  void AddPoint(const Point &p)
  {
    x += p.x;
    y += p.y;
  }

  void ShowPosition()
  {
    cout<<"["<<x<<", "<<y<<"]"<<endl;
  }
  };

int main(void)
{
  Point pos1 = {12, 4};
  Point pos2 = {20, 30};

  pos1.MovePos(-7, 10);
  pos1.ShowPosition();

  pos1.AddPoint(pos2);
  pos1.ShowPosition();
  return 0;
}
