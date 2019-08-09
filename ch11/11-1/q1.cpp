#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;    	// 장전된 총알의 수
public:
	Gun(int bnum) : bullet(bnum)
	{}
/*
  Gun(const Gun &ref): bullet(ref.bullet)
  {}
  Gun& operator=(const Gun &ref)
  {
    bullet = ref.bullet;
    return *this;
  }
  정의할 필요 없을뿐더러, 사용 안 함
  */ 
	void Shut()
	{
		cout<<"BBANG!"<<endl;
		bullet--;
	}
  int GetBullet() {return bullet;}
};

class Police
{
private:
	int handcuffs;    // 소유한 수갑의 수
	Gun * pistol;     // 소유하고 있는 권총
public:
	Police(int bnum, int bcuff)
		: handcuffs(bcuff)
	{
		if(bnum>0)
			pistol=new Gun(bnum);
		else
			pistol=NULL;
	}
  Police(const Police &ref): handcuffs(ref.handcuffs)
  {
    if(ref.pistol && ref.pistol->GetBullet()>0)
      pistol = new Gun(((ref.pistol)->GetBullet()));
    else
      pistol = NULL;
      
    // pistol = new Gun(*(ref.pistol)); if pistol is NULL, error
  }
  Police& operator=(const Police &ref)
  {
    if(pistol)
      delete pistol;
    if(ref.pistol && ref.pistol->GetBullet()>0)
      pistol = new Gun(((ref.pistol)->GetBullet()));
    else
      pistol = NULL;
    handcuffs = ref.handcuffs;
    return *this;
  }

	void PutHandcuff() 
	{
		cout<<"SNAP!"<<endl;
		handcuffs--;
	}
	void Shut()
	{
		if(pistol==NULL)
			cout<<"Hut BBANG!"<<endl;
		else
			pistol->Shut();
	}
	~Police()
	{
		if(pistol!=NULL)
			delete pistol;
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.Shut();
	pman1.PutHandcuff();

	Police pman2(0, 3);     // 권총소유하지 않은 경찰
	pman2.Shut();
	pman2.PutHandcuff();

  Police pman3(pman2);
  pman3.Shut(); // 권총소유하지 않은 경찰 which means pistol is NULL

  pman3 = pman1;
  pman1.Shut(); // 권총소유

	return 0;
}
