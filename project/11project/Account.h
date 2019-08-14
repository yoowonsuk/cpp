#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "StringClass.h"

class Account
{
  int id, balance;
  //char * name;
  String name;

public:
  Account(int, String, int);
//  Account(const Account &);
//  ~Account();
  
//  Account& operator=(const Account &);
  int GetAccID() const;
  int Withdraw(int);
  virtual void Deposit(int);
  virtual void ShowAccInfo() const;
};

#endif
