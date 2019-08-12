#ifndef __ACCOUNTARRAY_H__
#define __ACCOUNTARRAY_H__

#include "Account.h"

typedef Account * ACC_PTR;

class AccountArray
{
  ACC_PTR * acc;
  int len;
  AccountArray& operator=(const AccountArray&) {};
  AccountArray(const AccountArray&) {};

public:
  AccountArray(int len = 100);
  ACC_PTR& operator[](int len);
  ACC_PTR operator[] (int len) const;
  int GetAccLen() const;
  ~AccountArray();
};

#endif
