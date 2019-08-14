#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "AccountHandler.h"
#include "BankingCommonDec1.h"

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
    case INQUIRE:
      handler.ShowAllAccInfo();
      break;
    case EXIT:
      cout<<"program closed"<<endl<<endl;
      return 0;
    default:
      cout<<"invalid number"<<endl<<endl;
    }
  }
}
