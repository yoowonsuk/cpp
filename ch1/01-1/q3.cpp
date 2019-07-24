#include <iostream>

int main(void)
{
  int num;

  std::cout<<"n? ";
  std::cin>>num;

  for(int i=1; i<10; i++)
    std::cout<<num*i<<' ';
  std::cout<<std::endl;
  return 0;
}
