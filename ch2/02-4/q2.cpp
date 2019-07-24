#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using namespace std;

int main(void)
{
  srand(time(NULL));

  for(int i = 0; i<5; i++)
    cout<<i+1<<": "<<rand()%99+1<<endl;
  return 0;
}
