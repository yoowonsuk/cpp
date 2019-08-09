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
  Book(): price(0)
  {
    title = isbn = NULL;
  }
  Book(char t[], char i[], int p): price(p)
  {
    title = new char[strlen(t)+1];
    strcpy(title, t);
    isbn = new char[strlen(i)+1];
    strcpy(isbn, i);
  }
  Book(const Book& ref): price(ref.price)
  {
    title = new char[strlen(ref.title)+1];
    strcpy(title, ref.title);
    isbn = new char[strlen(ref.isbn)+1];
    strcpy(isbn, ref.isbn);
  }
  Book& operator=(const Book &ref)
  {
    if(title)
      delete []title;
    if(isbn)
      delete []isbn;

    title = new char[strlen(ref.title)+1];
    strcpy(title, ref.title);
    isbn = new char[strlen(ref.isbn)+1];
    strcpy(isbn, ref.isbn);
    price = ref.price;
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
  Ebook(): DRMKey(NULL)
  {}
  Ebook(char t[], char i[], int p, char d[]): Book(t, i, p)
  {
    DRMKey = new char[strlen(d)+1];
    strcpy(DRMKey, d);
  }
  Ebook(const Ebook &ref): Book(ref)
  {
    DRMKey = new char[strlen(ref.DRMKey)+1];
    strcpy(DRMKey, ref.DRMKey);
  }
  Ebook& operator=(const Ebook &ref)
  {
    Book::operator=(ref);
    if(DRMKey)
      delete []DRMKey;
    DRMKey = new char[strlen(ref.DRMKey)+1];
    strcpy(DRMKey, ref.DRMKey);
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
   cout<<endl;

   Book book1(book);
   book1.ShowBookInfo();
   cout<<endl;

   Ebook ebook1(ebook);
   ebook1.ShowEBookInfo();
   cout<<endl;

   Book book2;
   book2 = book;
   book2.ShowBookInfo();
   cout<<endl;

   Ebook ebook2;
   ebook2 = ebook;
   ebook2.ShowEBookInfo();
   return 0;
}
