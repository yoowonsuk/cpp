#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class SimpleClass
{
  int n1, n2;

  public:
    SimpleClass(int n=0, int m=0)
    {
      n1 = n;
      n2 = m;
    }
    void ShowData() const
    {
      cout<<n1<<' '<<n2<<endl;
    }
};

int main(void)
{
  SimpleClass sc1();
  SimpleClass mysc = sc1();
  mysc.ShowData();
  return 0;
}

SimpleClass sc1()
{
  SimpleClass sc(20, 30);
  return sc;
}
