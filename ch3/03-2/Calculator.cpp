#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "Calculator.h"

void Calculator::ShowOpCount()
{
  cout<<"add: "<<p<<" sub: "<<mi<<" mul: "
    <<mu<<" div: "<<d<<endl;
}

double Calculator::Add(double n1, double n2)
{
  p++;
  return n1 + n2;
}

double Calculator::Min(double n1, double n2)
{
  mi++;
  return n1-n2;
}

double Calculator::Mul(double n1, double n2)
{
  mu++;
  return n1 * n2;
}

double Calculator::Div(double n1, double n2)
{
  d++;
  return n1 / n2;
}

void Calculator::Init()
{
  p = mi = mu = d = 0;
}
