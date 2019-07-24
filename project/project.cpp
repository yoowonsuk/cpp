#include <iostream>
#define CUS_NUM 10

using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

typedef struct
{
  int id;
  char name[20];
  int balance;
} Account;

enum {MAKE=1, DEPOSIT, WITHDRAW, SHOW, EXIT};

void ShowMenu(void);
void MakeAccount(Account *, int *);
void DepositMoney(Account *, int);
void WithdrawMoney(Account *, int);
void ShowAllAccInfo(Account *, int);

int main(void)
{
   Account per[CUS_NUM];
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

void MakeAccount(Account * per, int * iptr)
{
  cout<<"[make an account]"<<endl;
  cout<<"ID? ";
  cin>>per[*iptr].id;
  cout<<"name? ";
  cin>>per[*iptr].name;
  cout<<"cash? ";
  cin>>per[*iptr].balance;
  cout<<endl;
  (*iptr)++;
}

void DepositMoney(Account * per, int num)
{
  int i;
  Account temp;

  cout<<"[deposit]"<<endl;;
  cout<<"ID? ";
  cin>>temp.id;
  cout<<"cash? ";
  cin>>temp.balance;
  for(i=0; i<num; i++)
    if(per[i].id == temp.id)
    {
      per[i].balance += temp.balance;
      cout<<"complete deposit"<<endl<<endl;
      break;
    }
  if(i == num)
    cout<<"void id, fail"<<endl<<endl;
}

void WithdrawMoney(Account * per, int num)
{
  int i;
  Account temp;

   cout<<"[withdrawal]"<<endl;
   cout<<"ID? ";
   cin>>temp.id;
   cout<<"cash? ";
   cin>>temp.balance;
   for(i=0; i<num; i++)
     if(per[i].id == temp.id)
     {
       if(per[i].balance < temp.balance)
       {
         cout<<"more than balance you withdraw"<<endl<<endl;
         return;
       }
       per[i].balance -= temp.balance;
       cout<<"complete withdrawal"<<endl<<endl;
       return;
     }
     if(i == num)
       cout<<"void id, fail"<<endl<<endl;
}    

void ShowAllAccInfo(Account * per, int num)
{
  for(int i=0; i<num; i++)
  {
    cout<<per[i].id<<endl;
    cout<<per[i].name<<endl;
    cout<<per[i].balance<<endl<<endl;
  }
}
