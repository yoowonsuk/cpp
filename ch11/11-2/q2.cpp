#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class BoundCheckIntArray
{
  int * arr, len;
  BoundCheckIntArray(const BoundCheckIntArray &arr){}
  BoundCheckIntArray& operator=(const BoundCheckIntArray &arr) {}

public:
  BoundCheckIntArray(int len): len(len)
  {
    arr = new int[len];
  }
  int& operator[] (int idx)
  {
    if(idx<0 || idx >= len)
    {
      cout<<"Array index out of bound exception"<<endl;
      exit(1);
    }
    return arr[idx];
  }
  int operator[] (int idx) const
  {
    if(idx<0 || idx >= len)
    {
      cout<<"Array index out of bound exception"<<endl;
      exit(1);
    }
    return arr[idx];
  }
  ~BoundCheckIntArray()
  {
    delete []arr;
  }
};

typedef BoundCheckIntArray* BoundCheckIntArrayPtr;

class BoundCheck2DIntArray
{
  BoundCheckIntArrayPtr * arr;
  int len;
  BoundCheck2DIntArray(const BoundCheck2DIntArray& arr) {}
  BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray& arr) {}

public:
  BoundCheck2DIntArray(int row, int col): len(row)
  {
    arr = new BoundCheckIntArrayPtr[row];
    for(int i = 0; i<row; i++)
      arr[i] = new BoundCheckIntArray(col);
  }
  BoundCheckIntArray& operator[] (int idx)
  {
    if(idx<0 || idx>=len)
    {
      cout<<"Array index out of bound exception"<<endl;
      exit(1);
    }
    return (*arr[idx]);
  }
  ~BoundCheck2DIntArray()
  {
    delete []arr;
  }
};

int main(void)
{
   BoundCheck2DIntArray arr2d(3, 4);

   for(int i = 0; i<3; i++)
     for(int j = 0; j<4; j++)
       arr2d[i][j] = i+j;

   for(int i = 0; i<3; i++)
   {
     for(int j = 0; j<4; j++)
       cout<<arr2d[i][j]<<' ';
     cout<<endl;
   }
   return 0;
}
