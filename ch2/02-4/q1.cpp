#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using namespace std;

int main(void)
{
  char str[30] = "I am happy";
  char str2[30] = "How are you?";
  char str3[30];

  cout<<strlen(str)<<endl;

  strcat(str, str2);
  cout<<str<<endl;

  strcpy(str3, str2);
  cout<<str3<<endl;

  if(!strcmp(str, str2))
   cout<<"They are same"<<endl;
  else
    cout<<"They are different"<<endl;

  if(strcmp(str2, str3))
    cout<<"str is differ from str3"<<endl;
  else
    cout<<"Both are identical"<<endl;

  return 0;
}
