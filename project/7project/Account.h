#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
  int id, balance;
  char * name;

public:
  Account(int, char[], int);
  Account(const Account &);
  ~Account();
  
  Account& operator=(const Account &);
  int GetAccID() const;
  int Withdraw(int);
  virtual void Deposit(int);
  virtual void ShowAccInfo() const;
};

#endif
