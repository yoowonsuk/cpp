#include <iostream>

int main(void)
{
  int val1;
  std::cout<<"first integer? ";
  std::cin>>val1;

  int val2;
  std::cout<<"second integer? ";
  std::cin>>val2;

  int result = val1 + val2;
  std::cout<<"result: "<<result<<std::endl;
  return 0;
}
