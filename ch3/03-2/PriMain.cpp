#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "Printer.h"

int main(void)
{
   
  Printer pnt;
  pnt.SetString("Hello World!");
  pnt.ShowString();

  pnt.SetString("I Love C++");
  pnt.ShowString();
  return 0;
}
