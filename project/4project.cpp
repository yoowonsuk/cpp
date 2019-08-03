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

void ShowMenu(void);
void MakeAccount(Account **, int *);
void DepositMoney(Account **, int);
void WithdrawMoney(Account **, int);
void ShowAllAccInfo(Account **, int);

int main(void)
{
   Account * per[CUS_NUM];
   int num=0, menu;

   while(1)
   {
     ShowMenu();
     cin>>menu;
     cout<<endl;

     switch(menu)
     {
      case MAKE:
        MakeAccount(per, &num);
        break;
      case DEPOSIT:
        DepositMoney(per, num);
        break;
      case WITHDRAW:
        WithdrawMoney(per, num);
        break;
      case 4:
        ShowAllAccInfo(per, num);
        break;
      case 5:
        cout<<"program closed"<<endl<<endl;
        return 0;
      default:
        cout<<"invalid choice"<<endl<<endl;
     }
   }
}

void ShowMenu(void)
{
  cout<<"-----MENU-----"<<endl;
  cout<<"1. make an account"<<endl;
  cout<<"2. deposit"<<endl;
  cout<<"3. withdraw"<<endl;
  cout<<"4. print all account"<<endl;
  cout<<"5. program exit"<<endl;
  cout<<"choice: ";
}

void MakeAccount(Account ** per, int * iptr)
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

  per[(*iptr)++] = new Account(i, n, b);
  cout<<endl;
}

void DepositMoney(Account ** per, int num)
{
  int i, j, b;

  cout<<"[deposit]"<<endl;;
  cout<<"ID? ";
  cin>>i;
  cout<<"cash? ";
  cin>>b;
  for(j=0; j<num; j++)
    if(per[j]->GetAccID() == i)
    {
      per[j]->Deposit(b);
      cout<<"complete deposit"<<endl<<endl;
      return;
    }
  cout<<"void id, fail"<<endl<<endl;
}

void WithdrawMoney(Account ** per, int num)
{
  int i, j, b;

   cout<<"[withdrawal]"<<endl;
   cout<<"ID? ";
   cin>>i;
   cout<<"cash? ";
   cin>>b;
   for(j=0; j<num; j++)
     if(per[j]->GetAccID() == i)
     {
       if(!per[j]->Withdraw(b))
         cout<<"more than balance you withdraw"<<endl<<endl;
       else
         cout<<"complete withdrawal"<<endl<<endl;
       return;
     }
   cout<<"void id, fail"<<endl<<endl;
}    

void ShowAllAccInfo(Account ** per, int num)
{
  for(int i=0; i<num; i++)
    per[i]->ShowAccInfo();
}
