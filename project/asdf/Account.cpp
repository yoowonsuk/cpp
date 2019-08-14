#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "Account.h"

Account::Account(int id, String name, int balance): id(id), balance(balance), name(name)
{
  /*
  this->name = new char[strlen(name)+1];
  strcpy(this->name, name);
  */
}
/*
Account::Account(const Account &ref): id(ref.id), balance(ref.balance)
{
  name = new char[strlen(ref.name)+1];
  strcpy(this->name, ref.name);
}

Account::~Account()
{
  delete []name;
}

Account& Account::operator=(const Account &ref)
{
  delete []name;
  id = ref.id, balance = ref.balance;
  name = new char[strlen(ref.name)+1];
  strcpy(name, ref.name);
}
*/
int Account::GetAccID() const
{
  return id;
}

int Account::Withdraw(int money)
{
  if(balance < money)
    return 0;
  balance -= money;
  return money;
}

void Account::Deposit(int money)
{
  balance += money;
}

void Account::ShowAccInfo() const
{
  cout<<"ID: "<<id<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Balance: "<<balance<<endl;
}
