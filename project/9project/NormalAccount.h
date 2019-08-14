#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include <iostream>
using namespace std;

#include "Account.h"
#include "StringClass.h"
class NormalAccount: public Account
{
  int rate;

public:
  NormalAccount(int id, String name, int balance, int rate): Account(id, name, balance), rate(rate)
  {}

  void Deposit(int money)
  {
    Account::Deposit((int)(money+money*rate/100));
  }

  void ShowAccInfo() const
  {
    Account::ShowAccInfo();
    cout<<"Rate: "<<rate<<endl;
  }
};

#endif
