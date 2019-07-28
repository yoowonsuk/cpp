#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "Car.h"
#include <cstring>

void Car::InitMembers(const char * ID, const int fuel)
{
  strcpy(gamerID, ID);
  fuelGauge = fuel;
  curSpeed = 0;
}

void Car::ShowCarState()
{
  cout<<"ID: "<<gamerID<<endl;
  cout<<"fuelGauge: "<<fuelGauge<<endl;
  cout<<"Current Speed: "<<curSpeed<<endl<<endl;
}

void Car::Accel()
{
  if(fuelGauge<2)
    return ;
  fuelGauge-=2;

  if(curSpeed + CAR_CONST::ACC_STEP > CAR_CONST::MAX_SPD)
    curSpeed = CAR_CONST::MAX_SPD;
  else
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
  if(curSpeed < CAR_CONST::BRK_STEP)
    curSpeed = 0;
  else
    curSpeed -= CAR_CONST::BRK_STEP;
}
