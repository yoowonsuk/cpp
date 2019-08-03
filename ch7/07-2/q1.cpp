#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class Rectangle
{
  int row, col;

  public:
    Rectangle(int r, int c): row(r), col(c)
    {}
    void ShowAreaInfo()
    {
      cout<<"area: "<<row*col<<endl;
    }
};

class Square : public Rectangle
{
  public:
    Square(int l): Rectangle(l, l)
    {}
};

int main(void)
{
  Rectangle rec(4, 3);
  rec.ShowAreaInfo();

  Square sqr(7);
  sqr.ShowAreaInfo();
  return 0;
}
