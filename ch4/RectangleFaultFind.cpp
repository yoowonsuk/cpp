#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

int main(void)
{
   Point pos1;
   if(!pos1.InitMembers(-2, 4))
     cout<<"Init fails"<<endl;
   if(!pos1.InitMembers(2, 4))
     cout<<"Init fails"<<endl;

   Point pos2;
   if(!pos2.InitMembers(5, 9))
     cout<<"Init fails"<<endl;

   Rectangle rec;
   if(!rec.InitMembers(pos2, pos1))
     cout<<"rec Init fails"<<endl;

   if(!rec.InitMembers(pos1, pos2))
     cout<<"rec Init fails"<<endl;

   rec.ShowRecInfo();
   return 0;
}
