#include <iostream>

int BoxVolume(int n1, int n2, int n3)
{
  return n1*n2*n3;
}

int BoxVolume(int n1, int n2)
{
  return n1*n2;
}

int BoxVolume(int n1)
{
  return n1;
}

int main(void)
{
  
	std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;  
	return 0;
}
