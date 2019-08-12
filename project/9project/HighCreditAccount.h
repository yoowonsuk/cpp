#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include <iostream>
using namespace std;

#include "NormalAccount.h"
#include "BankingCommonDec1.h"

class HighCreditAccount: public NormalAccount
{
  int rank;

public:
  HighCreditAccount(int id, String name[], int balance, int rate, int rank): NormalAccount(id, name, balance, rate), rank(rank)
  {}

  void Deposit(int money)
  {
    NormalAccount::Deposit(money);
    if(rank == 1)
      Account::Deposit((int)(money*(LEVEL_A)/100));
    else if(rank == 2)
      Account::Deposit((int)(money*(LEVEL_B)/100));
    else
      Account::Deposit((int)(money*(LEVEL_C)/100));
  }

  void ShowAccInfo() const
  {
    NormalAccount::ShowAccInfo();
    cout<<"Rank: ";
    if(rank == 1)
      cout<<"LEVEL_A";
    else if(rank == 2)
      cout<<"LEVEL_B";
    else
      cout<<"LEVEL_C";
    cout<<endl;
  }
};

#endif
