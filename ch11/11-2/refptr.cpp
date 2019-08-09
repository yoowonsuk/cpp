#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

int main(void)
{
  int i = 5;
  // int * p = &i; p로 인해 const int *& ref문장을 의미없게 만듦
  const int * p = &i;
  const int *& ref = p;
  return 0;
}

/*
 * 변수 = 변수   일반 = 일반.  con = 일반, con
 * ptr = &변수   일반 = 일반.  con = 일반, con
 * ptr = ptr     일반 = 일반.  con = con
 * const INT_PTR ptr
 * */
