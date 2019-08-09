#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class BoundCheck2DIntArray
{
  int * arr;
  int row, col;
  BoundCheck2DIntArray(const BoundCheck2DIntArray &ref) {}
  BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray &ref) {}

public:
  BoundCheck2DIntArray(int r, int c): row(r), col(c)
  {
    arr = new int[r*c];
  }
  BoundCheck2DIntArray& operator[](int idx)
  {
    if(idx<0 || idx>= // 문제가 생기는 부분
  ~BoundCheck2DIntArray()
  {
    delete []arr;
  }
}

int main(void)
{
  return 0;
}
