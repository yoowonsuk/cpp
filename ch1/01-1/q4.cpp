#include <iostream>

int main(void)
{
  int num=0;

  while(1)
  {
    std::cout<<"how much did he or she sell? ";
    std::cin>>num;

    if(num == -1)
      break;
    std::cout<<"Salary: "<<50 + num*0.12<<std::endl;
  }
  return 0;
}

