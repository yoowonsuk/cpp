#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include <cstring>
#include "Printer.h"

void Printer::SetString(const char st[20])
{
  strcpy(str, st);
}

void Printer::ShowString()
{
  cout<<str<<endl;
}
