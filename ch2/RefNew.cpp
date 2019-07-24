#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

int main(void)
{
  int * ptr = new int; // can't declare "int * (&ref) = new int;
  *ptr = 10;

  cout<<*ptr<<endl;
  delete ptr;
  
  ptr = new int;
  int & ref = *ptr;
  int * (&pref) = ptr;
  ref = 20;

  cout<<ref<<endl;
  delete ptr; // delete expect the parameter to be pointer
  
  ptr = new int[5];
  pref = ptr;
  pref[0] = 5;
  pref[1] = 10;

  cout<<pref[0]<<endl<<pref[1]<<endl;
  delete []pref;
  return 0;
}
