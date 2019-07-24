#include <iostream>

int main(void)
{
  int arr[5], result=0;

  for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
  {
    std::cout<<"integer input"<<i+1<<": ";
    std::cin>>arr[i];
    result += arr[i];
  }

  std::cout<<"result: "<<result<<std::endl;
  return 0;
}
