#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class Car
{
  int gasolineGauge;

  public:
    Car(int g)
   {
     gasolineGauge = g;
   }
    int GetGasGauge()
    {
      return gasolineGauge;
    }
};

class HybridCar : public Car
{
  int electricGauge;

  public:
    HybridCar(int e, int g): Car(g), electricGauge(e)
    {}
    int GetElecGauge()
    {
      return electricGauge;
    }
};

class HybridWaterCar: public HybridCar
{
  int waterGauge;

  public:
    HybridWaterCar(int w, int e, int g): HybridCar(e, g), waterGauge(w)
    {}
    void ShowCurrentGauge()
    {
      cout<<"gasoline: "<<GetGasGauge()<<endl;
      cout<<"electricity: "<<GetElecGauge()<<endl;
      cout<<"water: "<<waterGauge<<endl;
    }
};

int main(void)
{
   HybridWaterCar * car = new HybridWaterCar(100, 200, 300);
   car->ShowCurrentGauge();
   delete car;
   return 0;
}

