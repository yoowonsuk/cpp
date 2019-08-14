#ifndef __BOUND_CHECK_ARRAY_H__
#define __BOUND_CHECK_ARRAY_H__

#include <iostream>
using namespace std;

template <class T>
class BoundCheckArray
{
  T * acc;
  int len;
  BoundCheckArray& operator=(const BoundCheckArray& arr) {}
  BoundCheckArray(const BoundCheckArray& arr) {}

public:
  BoundCheckArray(int len = 100);
  T& operator[](int len);
  T operator[] (int len) const;
  int GetAccLen() const;
  ~BoundCheckArray();
};

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len): len(len)
{
  acc = new T[len];
}

template <class T>
T& BoundCheckArray<T>::operator[](int len)
{
  if(len < 0 || len >= this->len)
  {
    cout<<"Array index out of bound exception"<<endl;
    exit(1);
  }
  return acc[len];
}

template <class T>
T BoundCheckArray<T>::operator[] (int len) const
{
  if(len < 0 || len >= this->len)
  {
    cout<<"Array index out of bound exception"<<endl;
    exit(1);
  }
  return acc[len];
}

template <class T>
int BoundCheckArray<T>::GetAccLen() const
{
  return len;
}

template <class T>
BoundCheckArray<T>::~BoundCheckArray()
{
  delete []acc;
}

#endif
