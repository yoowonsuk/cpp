#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator
{
  private:
    int p, mi, mu, d;
  public:
    void ShowOpCount();
    double Add(double, double);
    double Min(double, double);
    double Mul(double, double);
    double Div(double, double);
    void Init(void);
};

#endif
