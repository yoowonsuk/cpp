#include <iostream>

int main(void)
{
  char name[20], phone[20];

  std::cout<<"name? ";
  std::cin>>name;
  std::cout<<"phone? ";
  std::cin>>phone;

  std::cout<<"name: "<<name<<" phone: "<<phone<<std::endl;
  return 0;
}
