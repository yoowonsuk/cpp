#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class SnivelCap
{
  public:
    void Take() const {cout<<"SnivelCap"<<endl;}
};

class SneezeCap
{
  public:
    void Take() const{cout<<"SneezeCap"<<endl;}
};

class SnuffleCap
{
  public:
    void Take() const{cout<<"SnuffleCap"<<endl;}
};

class CONTAC600
{
  SnivelCap scap;
  SneezeCap zcap;
  SnuffleCap ncap;
  public:
    void Take() const
    {
      scap.Take();
      zcap.Take();
      ncap.Take();
    }
};

class ColdPatient
{
  public:
    //void TakeSnivelCap(const SnivelCap &cap) const{cap.Take();}
    //void TakeSneezeCap(const SneezeCap &cap) const{cap.Take();}
    //void TakeSnuffleCap(const SnuffleCap &cap) const{cap.Take();}
    void TakeCONTAC600(const CONTAC600 &cap) const{cap.Take();}
};

int main(void)
{
//  SnivelCap scap;
//  SneezeCap zcap;
//  SnuffleCap ncap;
  CONTAC600 contac;

  ColdPatient sufferer;
//  sufferer.TakeSnivelCap(scap);
//  sufferer.TakeSneezeCap(zcap);
//  sufferer.TakeSnuffleCap(ncap);
  sufferer.TakeCONTAC600(contac);
  return 0;
}
