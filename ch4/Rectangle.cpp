#include <iostream>
#include "Rectangle.h"
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
  if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
  {
    cout<<"wrong information"<<endl<<endl;
    return false;
  }
  this->ul = ul;
  this->lr = lr;
  return true;
}

void Rectangle::ShowRecInfo() const
{
  cout<<"upleft: ["<<ul.GetX()<<", "<<ul.GetY()<<"]"<<endl;
  cout<<"lowright: ["<<lr.GetX()<<", "<<lr.GetY()<<"]"<<endl;
}

