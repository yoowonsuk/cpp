#ifndef _STRING_CLASS_H__
#define _STRING_CLASS_H__

#include <iostream>
#include <cstring>

using namespace std; // for ostream and istream

class String
{
  char * str;
  
public:
  String(const char *);
  String();
  ~String();
  String(const String&);
  String& operator=(const String&);
  String operator+(const String&); // 반환형 참조자일 경우 메모리 누수
  String& operator+=(const String&);
  bool operator==(const String&);
  friend ostream& operator<<(ostream& os, const String &s);
  friend istream& operator>>(istream& is, String &s);
  char * GetString() const;
};

#endif
