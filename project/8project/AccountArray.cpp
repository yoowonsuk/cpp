#include <iostream>
using namespace std;

#include "AccountArray.h"

AccountArray::AccountArray(int len): len(len)
{
  acc = new ACC_PTR[len];
}
ACC_PTR& AccountArray::operator[](int len)
{
  if(len < 0 || len >= this->len)
  {
    cout<<"Array index out of bound exception"<<endl;
    exit(1);
  }
  return acc[len];
}
ACC_PTR AccountArray::operator[] (int len) const
{
  if(len < 0 || len >= this->len)
  {
    cout<<"Array index out of bound exception"<<endl;
    exit(1);
  }
  return acc[len];
}
int AccountArray::GetAccLen() const
{
  return len;
}
AccountArray::~AccountArray()
{
  delete []acc;
}
