#include <iostream>

void MyFunc(void)
{
  std::cout<<"MyFunc(void) called"<<std::endl;
}

void MyFunc(char c)
{
  std::cout<<"MyFunc(char c) called"<<std::endl;
}

void MyFunc(int n1, int n2)
{
  std::cout<<"MyFunc(int n1, int n2) called"<<std::endl;
}

int main(void)
{
  MyFunc();
  MyFunc('A');
  MyFunc(12, 13);
  return 0;
}
