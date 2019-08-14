#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "BankingCommonDec1.h"
#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
//#include "AccountArray.h" // add header
#include "BoundCheckArray.h"

class AccountHandler
{
  BoundCheckArray<Account*> acc;
//  AccountArray acc;
//  Account * acc[CUS_NUM];
  int accNum;

public:
  AccountHandler();
  ~AccountHandler();

  void ShowMenu() const;
  void MakeAccount();
  void DepositMoney();
  void WithdrawMoney();
  void ShowAllAccInfo() const;
};

#endif
