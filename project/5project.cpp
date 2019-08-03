#include <iostream>
#include <cstring>
#define CUS_NUM 10

using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class Account
{
  int id;
  char * name;
  int balance;

  public:
    Account(int id, char name[], int balance): id(id), balance(balance)
    {
      this->name = new char[strlen(name)+1];
      strcpy(this->name, name);
    }
    Account(const Account &ref): id(ref.id), balance(ref.balance)
   {
     name = new char[strlen(ref.name)+1];
     strcpy(name, ref.name);
   }
    int GetAccID() const
    {
      return id;
    }
    int Withdraw(int money)
    {
      if(balance < money)
        return 0;
      balance -= money;
      return money;
    }
    void Deposit(int money)
    {
      balance += money;
    }
    void ShowAccInfo() const
    {
      cout<<id<<endl;
      cout<<name<<endl;
      cout<<balance<<endl<<endl;
    }
    ~Account()
    {
      delete []name;
    }
};

enum {MAKE=1, DEPOSIT, WITHDRAW, SHOW, EXIT};

class AccountHandler
{
  Account * acc[CUS_NUM];
  int accNum;

  public:
    AccountHandler(): accNum(0)
    {}
   
    void ShowMenu(void) const
    {
      cout<<"-----MENU-----"<<endl;
      cout<<"1. make an account"<<endl;
      cout<<"2. deposit"<<endl;
      cout<<"3. withdraw"<<endl;
      cout<<"4. print all account"<<endl;
      cout<<"5. program exit"<<endl;
      cout<<"choice: ";
    }

    void MakeAccount()
    {
      int i, b;
      char n[20];

      cout<<"[make an account]"<<endl;
      cout<<"ID? ";
      cin>>i;
      cout<<"name? ";
      cin>>n;
      cout<<"cash? ";
      cin>>b;

      acc[(accNum)++] = new Account(i, n, b);
      cout<<endl;
    }
 
    void DepositMoney()
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

    void WithdrawMoney()
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

    void ShowAllAccInfo()
    {
      for(int i=0; i<accNum; i++)
        acc[i]->ShowAccInfo();
    }
    ~AccountHandler()
    {
      for(int i = 0; i<accNum; i++)
        delete acc[i];
    }
};

int main(void)
{
  AccountHandler handler;
  int menu;

   while(1)
   {
     handler.ShowMenu();
     cin>>menu;
     cout<<endl;

     switch(menu)
     {
      case MAKE:
        handler.MakeAccount();
        break;
      case DEPOSIT:
        handler.DepositMoney();
        break;
      case WITHDRAW:
        handler.WithdrawMoney();
        break;
      case 4:
        handler.ShowAllAccInfo();
        break;
      case 5:
        cout<<"program closed"<<endl<<endl;
        return 0;
      default:
        cout<<"invalid choice"<<endl<<endl;
     }
   }
}
