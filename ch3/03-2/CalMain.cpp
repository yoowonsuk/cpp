#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/
#include "Calculator.h"

int main(void)
{
  Calculator cal;
  cal.Init();
  cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
  cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
  cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
  cout<<"4.9 / 1.4 = "<<cal.Div(4.9, 1.2)<<endl;
  cal.ShowOpCount();
  return 0;
}
