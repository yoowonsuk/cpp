#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

namespace COMP_POS{
  enum {CLERK, SENIOR, ASSIST, MANAGER};

  void ShowNameCardInfo(int rank)
  {
    switch(rank)
    {
      case CLERK:
        cout<<"CLERK"<<endl<<endl;
        return;
      case SENIOR:
        cout<<"SENIOR"<<endl<<endl;
        return;
      case ASSIST:
        cout<<"ASSIST"<<endl<<endl;
        return;
      case MANAGER:
        cout<<"MANAGER"<<endl<<endl;
        return;
    }
  }
}

class NameCard
{
  char * name;
  char * company;
  char * phone;
  int rank;

  public:
    NameCard(char * n, char * c, char * p, int r)
    {
      int len = strlen(n);
      name = new char[len+1];
      strcpy(name, n);
      len = strlen(c);
      company = new char[len+1];
      strcpy(company, c);
      len = strlen(p);
      phone = new char[len+1];
      strcpy(phone, p);
      rank = r;
    }
    NameCard(const NameCard & copy): rank(copy.rank)
   {
     int len = strlen(copy.name);
     name = new char[len+1];
     strcpy(name, copy.name);

     len = strlen(copy.company);
     company = new char[len+1];
     strcpy(company, copy.company);

     len = strlen(copy.phone);
     phone = new char[len+1];
     strcpy(phone, copy.phone);
   }
    ~NameCard()
    {
      delete []name;
      delete []company;
      delete []phone;
    }
    void ShowNameCardInfo()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Company: "<<company<<endl;
      cout<<"Phone: "<<phone<<endl;
      cout<<"Rank: ", COMP_POS::ShowNameCardInfo(rank);
    }
};

/*
int main(void)
{
 NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
 NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
 NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
 manClerk.ShowNameCardInfo();
 manSENIOR.ShowNameCardInfo();
 manAssist.ShowNameCardInfo();
 return 0;
}
*/

int main(void)
{
  NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
  NameCard copy1 = manClerk;
  NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
  NameCard copy2 = manSENIOR;
  copy1.ShowNameCardInfo();
  copy2.ShowNameCardInfo();
  return 0;
}
