#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class FruitSeller
{

  private:
    int APPLE_PRICE;
    int num;
    int profit;
  public:
    void initMembers(const int price, const int num);
    int FruitSell(const int money);
    void HowMuch(void) const;
};

void FruitSeller::initMembers(const int price, const int num)
{
  if(price < 0 || num < 0)
  {
    cout<<"Invalid Parameter to FruitSeller::initMembers"<<endl;
    return;
  }
  APPLE_PRICE = price;
  this->num = num;
  profit = 0;
}

int FruitSeller::FruitSell(const int money)
{
//  num -= money/APPLE_PRICE;
  if(money < 0)
  {
    cout<<"Invalid Paramember to FruitSell"<<endl;
    return 0;
  }
  profit += money;
  num -= money/APPLE_PRICE;
  return money/APPLE_PRICE;
}

void FruitSeller::HowMuch(void) const
{
  cout<<"the number of apples: "<<num<<endl;
  cout<<"the profit: "<<profit<<endl<<endl;
}

class FruitBuyer
{
  private:
    int money;
    int num;
  public:
    void initMembers(const int money);
    void FruitBuy(FruitSeller &seller, const int money);
    void HowMany(void) const;
};

void FruitBuyer::initMembers(const int money)
{
  if(money < 0)
  {
    cout<<"Invalid Parameter to FruitBuyer::initMembers"<<endl;
    return;
  }
  num = 0;
  this->money = money;
}

void FruitBuyer::FruitBuy(FruitSeller &seller, const int money)
{
  if(money < 0)
  {
    cout<<"Invalide Parameter to FruitBuy"<<endl;
    return;
  }
  int n = seller.FruitSell(money);
  num += n;
  this->money -= money;
}

void FruitBuyer::HowMany() const
{
  cout<<"the number of apples: "<<num<<endl;
  cout<<"the money he has: "<<money<<endl<<endl;
}

int main(void)
{
  FruitSeller seller;
  seller.initMembers(1000, 20);
  FruitBuyer buyer;
  buyer.initMembers(10000);
  buyer.FruitBuy(seller, 2000);
  seller.HowMuch();
  buyer.HowMany();
  return 0;
}
