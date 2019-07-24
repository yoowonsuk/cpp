#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

typedef struct
{
  int xpos;
  int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main(void)
{
  Point * pos1 = new Point;
  Point * pos2 = new Point;
  
  pos1->xpos = 3;
  pos1->ypos = 6;
  pos2->xpos = 4;
  pos2->ypos = 7;

  Point & pos = PntAdder(*pos1, *pos2);

  cout<<"xpos: "<<pos.xpos<<endl;
  cout<<"ypos: "<<pos.ypos<<endl;
  delete pos1;
  delete pos2;
  delete &pos;
  return 0;
}

Point& PntAdder(const Point &p1, const Point &p2)
{
  Point * ptr = new Point;
  ptr->xpos = p1.xpos+p2.xpos;
  ptr->ypos = p1.ypos+p2.ypos;
  return *ptr;
}
