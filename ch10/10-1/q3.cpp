#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl; 
	}
  Point& operator+=(const Point &pos)
  {
    xpos += pos.xpos;
    ypos += pos.ypos;
    return *this;
  }
  Point& operator-=(const Point &pos)
  {
    xpos -= pos.xpos;
    ypos -= pos.ypos;
    return *this;
  }
	friend Point operator+(const Point &pos1, const Point &pos2);
  friend Point operator-(const Point &pos1, const Point &pos2);
  friend bool operator==(const Point &pos1, const Point &pos2);
  friend bool operator!=(const Point &pos1, const Point &pos2);
};

Point operator+(const Point &pos1, const Point &pos2) 
{
	Point pos(pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos);
	return pos;
} 

Point operator-(const Point &pos1, const Point &pos2)
{
  Point pos(pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos);
  return pos;
}

bool operator==(const Point &pos1, const Point &pos2)
{
  if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
    return true;
  return false;
}

bool operator!=(const Point &pos1, const Point &pos2)
{
  return !(pos1 == pos2);
}

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);	
	Point pos3=pos1+pos2;
  Point pos4 = pos1 - pos2;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
  pos4.ShowPosition();

  pos2 += pos1;
  pos2.ShowPosition();
  pos2 -= pos1;
  pos2.ShowPosition();

  cout<<(pos1 == pos2)<<endl;
  cout<<(pos1 != pos2)<<endl;
	return 0;
}

