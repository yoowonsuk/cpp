#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class SimpleClass
{
  int n1, n2;
  
  public:
    SimpleClass()
    {
      n1 = 0;
      n2 = 0;
    }
    SimpleClass(int n)
    {
      n1 = n;
      n2 = 0;
    }
    SimpleClass(int n, int m)
    {
      n1 = n;
      n2 = m;
    }
    /*
    SimpleClass(int n=0, int m=0)
    {
      n1 = n;
      n2 = m;
      }
      */

    void ShowData() const
    {
      cout<<n1<<' '<<n2<<endl;
    }
};

int main(void)
{
   SimpleClass sc1;
   sc1.ShowData();

   SimpleClass sc2(100);
   sc2.ShowData();

   SimpleClass sc3(100, 200);
   sc3.ShowData();
   return 0;
}
