#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class MyFriendInfo
{
  char * name;
  int age;

  public:
    MyFriendInfo(char * name, int age): age(age)
   {
     this->name = new char[strlen(name)+1];
     strcpy(this->name, name);
   }
    void ShowMyFriendInfo()
    {
      cout<<"name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
    }
    ~MyFriendInfo()
    {
      delete []name;
    }
};

class MyFriendDetailInfo: public MyFriendInfo
{
  char * addr;
  char * phone;

  public:
    MyFriendDetailInfo(char * name, int age, char * addr, char * phone): MyFriendInfo(name, age)
  {
    this->addr = new char[strlen(addr)+1];
    this->phone = new char[strlen(phone)+1];
    strcpy(this->addr, addr);
    strcpy(this->phone, phone);
  }
    void ShowMyFriendDetailInfo()
    {
      ShowMyFriendInfo();
      cout<<"addr: "<<addr<<endl;
      cout<<"phone: "<<phone<<endl;
    }
    ~MyFriendDetailInfo()
    {
      delete []addr;
      delete []phone;
    }
};

int main(void)
{
  MyFriendDetailInfo * fri = new MyFriendDetailInfo("yoo", 25, "seoul", "010");
  fri->ShowMyFriendDetailInfo();
  delete fri;
  return 0;
}
