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
    int FruitSell(int money);
    void HowMuch(void);
};

void FruitSeller::initMembers(const int price, const int num)
{
  APPLE_PRICE = price;
  this->num = num;
  profit = 0;
}

int FruitSeller::FruitSell(int money)
{
//  num -= money/APPLE_PRICE;
  profit += money;
  num -= money/APPLE_PRICE;
  return money/APPLE_PRICE;
}

void FruitSeller::HowMuch(void)
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
    void HowMany(void);
};

void FruitBuyer::initMembers(const int money)
{
  num = 0;
  this->money = money;
}

void FruitBuyer::FruitBuy(FruitSeller &seller, const int money)
{
  int n = seller.FruitSell(money);
  num += n;
  this->money -= money;
}

void FruitBuyer::HowMany()
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
