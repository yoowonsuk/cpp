#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
/*using namespace std;*/

class Book
{
  char * title, * isbn;
  int price;

  public:
  Book(char t[], char i[], int p): price(p)
  {
    title = new char[strlen(t)+1];
    strcpy(title, t);
    isbn = new char[strlen(i)+1];
    strcpy(isbn, i);
  }
  void ShowBookInfo()
  {
    cout<<title<<endl<<isbn<<endl<<price<<endl;
  }
  ~Book()
  {
    delete []title;
    delete []isbn;
  }
};

class Ebook: public Book
{
  char * DRMKey;
  public:
  Ebook(char t[], char i[], int p, char d[]): Book(t, i, p)
  {
    DRMKey = new char[strlen(d)+1];
    strcpy(DRMKey, d);
  }
  void ShowEBookInfo()
  {
    ShowBookInfo();
    cout<<DRMKey<<endl;
  }
  ~Ebook()
  {
    delete []DRMKey;
  }
};

int main(void)
{
   Book book("좋은 C++", "555-12345-890-0", 20000);
   book.ShowBookInfo();
   cout<<endl;
   Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8low");
   ebook.ShowEBookInfo();
   return 0;
}
