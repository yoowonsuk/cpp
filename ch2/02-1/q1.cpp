#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

void RefPlus(int &ref);
void RefSign(int &ref);

int main(void)
{
  int num = 10;

  cout<<num<<endl;
  RefPlus(num);
  cout<<num<<endl;
  RefSign(num);
  cout<<num<<endl;

  return 0;
}

void RefPlus(int &ref)
{
  ref += 1;
}

void RefSign(int &ref)
{
  ref *= -1;
}
