#ifndef __ARRAY_TEMPLATE_H__
#define __ARRAY_TEMPLATE_H__

#include <iostream>

using namespace std;

template <class T>
class BoundCheckArray
{
  T * arr;
  int len;
  BoundCheckArray(const BoundCheckArray&) {}
  BoundCheckArray& operator=(const BoundCheckArray&) {}

public:
  BoundCheckArray(int len): len(len)
  {
    arr = new T[len];
  }

  T& operator[] (int idx)
  {
    if(idx<0 || idx>=len)
    {
      cout<<"Array index out of bound exception"<<endl;
      exit(1);
    }
    return arr[idx];
  }

  T operator[](int idx) const
  {
    if(idx<0 || idx >= len)
    {
      cout<<"Array index out of bound exception"<<endl;
      exit(1);
    }
    return arr[idx];
  }

  int GetArrLen() const
  {
    return len;
  }

  ~BoundCheckArray()
  {
    delete []arr;
  }
};

#endif
