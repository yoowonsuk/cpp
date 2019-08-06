#include <iostream>

#include "AccountHandler.h"

using namespace std;

AccountHandler::AccountHandler(): accNum(0)
{}

void AccountHandler::ShowMenu() const
{
  cout<<"-----MENU-----"<<endl;
  cout<<"1. make an account"<<endl;
  cout<<"2. deposit"<<endl;
  cout<<"3. withdraw"<<endl;
  cout<<"4. print all account"<<endl;
  cout<<"5. program exit"<<endl;
  cout<<"choice: ";
}

AccountHandler::~AccountHandler()
{
  for(int i = 0; i<accNum; i++)
    delete acc[i];
}

void AccountHandler::MakeAccount()
{
  int i, b, choice;
  char n[NAME_LEN];

  cout<<"1. 보통예금계좌 2. 신용신뢰계좌, 선택: ";
  cin>>choice;

  cout<<"[make an account]"<<endl;
  cout<<"ID? ";
  cin>>i;
  cout<<"name? ";
  cin>>n;
  cout<<"cash? ";
  cin>>b;
  
  if(choice == 1)
  {
    int rate;
    cout<<"rate? ", cin>>rate;
    acc[(accNum)++] = new NormalAccount(i, n, b, rate);
  }
  else
  {
    int rate, rank;
    cout<<"rate? ", cin>>rate;
    cout<<"rank?(1toA, 2toB, 3toC) ", cin>>rank;
    acc[(accNum)++] = new HighCreditAccount(i, n, b, rate, rank);
  }
  cout<<endl;
}

void AccountHandler::DepositMoney()
{
  int i, j, b;

  cout<<"[deposit]"<<endl;;
  cout<<"ID? ";
  cin>>i;
  cout<<"cash? ";
  cin>>b;
  for(j=0; j<accNum; j++)
    if(acc[j]->GetAccID() == i)
    {
      acc[j]->Deposit(b);
      cout<<"complete deposit"<<endl<<endl;
      return;
    }
  cout<<"void id, fail"<<endl<<endl;
}

void AccountHandler::WithdrawMoney()
{
  int i, j, b;

  cout<<"[withdrawal]"<<endl;
  cout<<"ID? ";
  cin>>i;
  cout<<"cash? ";
  cin>>b;
  for(j=0; j<accNum; j++)
    if(acc[j]->GetAccID() == i)
    {
      if(!acc[j]->Withdraw(b))
        cout<<"more than balance you withdraw"<<endl<<endl;
      else
        cout<<"complete withdrawal"<<endl<<endl;
      return;
    }
  cout<<"void id, fail"<<endl<<endl;
}    

void AccountHandler::ShowAllAccInfo() const
{
  for(int i=0; i<accNum; i++)
    acc[i]->ShowAccInfo(), cout<<endl;
}
