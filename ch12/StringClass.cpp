#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

#include "StringClass.h"

String::String(): str(NULL)
{}

String::String(const char * c)
{
  str = new char[strlen(c)+1];
  strcpy(str, c);
}

String::String(const String& s)
{
  str = new char[strlen(s.GetString())+1];
  strcpy(str, s.GetString());
}

String::~String()
{
  if(!str)
   delete []str;
}

String& String::operator=(const String& s)
{
  if(!str)
    delete []str;
  str = new char[strlen(s.GetString())+1];
  strcpy(str, s.GetString());
  return *this;
}

String String::operator+(const String& s)
{
  char * nstr = new char[strlen(str)+strlen(s.GetString())-1];
  strcpy(nstr, str);
  strcat(nstr, s.GetString());
  String nS(nstr);
  delete []nstr;
  return nS;
}

String& String::operator+=(const String& s)
{
  char * temp = new char[strlen(str)+strlen(s.GetString())-1];
  strcpy(temp, str);
  strcat(temp, s.GetString());
  if(!str)
    delete []str;
  str = temp;
  return *this;
  /*
   * *this = *this+s;
   * return *this;
   */
}

bool String::operator==(const String& s)
{
  if(strcmp(str, s.GetString()))
    return false;
  return true;
  // strcmp(str, s.GetString()) ? false : true;
}

ostream& operator<<(ostream& os, const String &s)
{
  os<<(s.GetString());
  return os;
}

istream& operator>>(istream& is, String &s)
{
  char ch[100];
  is>>ch;
  /*
  delete []str;
  strcpy(str, ch);
  */
  s = String(ch);
  return is;
}

char * String::GetString() const
{
  return str;
}
