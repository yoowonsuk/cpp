#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "StringClass.h"

int main(void)
{
  String str1 = "I like ";
  String str2 = "string class";
  String str3 = str1 + str2;

  cout<<str1<<endl;
  cout<<str2<<endl;
  cout<<str3<<endl;

  str1+=str2;
  if(str1 == str3)
    cout<<"they're identical"<<endl;
  else
    cout<<"both are different"<<endl;

  String str4;
  cout<<"input string: ";
  cin>>str4;
  cout<<"input string: "<<str4<<endl;
  return 0;
}
