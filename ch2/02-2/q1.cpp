#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

int main(void)
{
  const int num = 12;
  const int * ptr = &num;
  const int * &ref = ptr;

  cout<<"*ptr: "<<*ptr<<endl;
  cout<<"*ref: "<<*ref<<endl;
  return 0;
}
