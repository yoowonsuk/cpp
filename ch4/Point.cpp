#include "Point.h"
#include <iostream>
using namespace std;
   
bool Point::InitMembers(int x, int y)
{
  if(x >= 0 && x <=100 && y >= 0 && y <= 100)
  {
    this->x = x;
    this->y = y;
    return true;
  }
  cout<<"scope error"<<endl<<endl;
  return false;
}

int Point::GetX() const
{
  return x;
}

int Point::GetY() const
{
  return y;
}

bool Point::SetX(int x)
{
  if(x >= 0 && x <= 100)
  {
    this->x = x;
    return true;
  }
  cout<<"scope error"<<endl<<endl;
  return false;
}

bool Point::SetY(int y)
{
  if(y >= 0 && y <= 100)
    this->y = y;
  cout<<"scope error"<<endl<<endl;
  return false;
}


