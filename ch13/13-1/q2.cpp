#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

template <class T>
int SumArray(T arr[], int len)
{
  T sum = 0;
  for(int i = 0; i<len; i++)
    sum += arr[i];
  return sum;
}

int main(void)
{
  int ar1[] = {3, 5, 7};
  double ar2[] = {3.2, 5, 6.8};

  cout<<SumArray(ar1, 3)<<endl;
  cout<<SumArray(ar2, 3)<<endl;
  return 0;
}
