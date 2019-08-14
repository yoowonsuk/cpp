class AccountException
{
public:
  virtual void ShowException() const = 0;
};

class WithdrawException: public AccountException
{
  int reqdep;

public:
  WithdrawException(int reqdep): reqdep(reqdep)
  {}
  void ShowException() const
  {
    cout<<"[예금된 금액보다 더 많은 금액"<<reqdep<<"을 요청]"<<endl;
  }
};

class BelowZero: public AccountException
{
  int minus;

public:
  BelowZero(int minus): minus(minus)
  {}
  void ShowException() const
  {
    cout<<"[0보다 작은 값의 입출금"<<minus<<"을 요청]"<<endl;
  }
};
