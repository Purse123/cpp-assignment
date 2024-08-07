#include <algorithm>
#include <iostream>
#include <string>

class Book {
public:
  std::string Author, ISBN;
  int p_year, p_month, p_date, edition;
  void getData();
};

class VoiceRecord {
public:
  std::string Speaker;
  int d_year, d_month, d_date, duration;
  void getData();
};

class TalkingBook : public Book, public VoiceRecord {
public:
  void display(Book&);
  void display(VoiceRecord&);
};

void Book::getData() {
  std::cout << "Enter Book Author: ";
  std::cin >> Author;
  std::cout << "Enter Book ISBN: ";
  std::cin >> ISBN;
  std::cout << "Enter Book Edition: ";
  std::cin >> edition;
  std::cout << "Enter Book publish date(yyyy-mm-dd): " << std::endl;
  std::cin >> p_year;
  std::cin >> p_month;
  std::cin >> p_date;
}

void VoiceRecord::getData() {
  std::cout << "Enter name of speaker: ";
  std::cin >> Speaker;
  std::cout << "Enter record duration: ";
  std::cin >> duration;
  std::cout << "Enter record publish date(yyyy-mm-dd): " << std::endl;
  std::cin >> d_year;
  std::cin >> d_month;
  std::cin >> d_date;
}

void TalkingBook::display(Book &a) {
  std::cout << "Book Detail: " << std::endl 
            << "Author: " << a.Author << std::endl
            << "ISBN: " << a.ISBN << std::endl
            << "Edition: " << a.edition << std::endl
            << "Publish date: " << a.p_year << "-" << a.p_month << "-" << a.p_date << std::endl;
}

void TalkingBook::display(VoiceRecord &x) {
  std::cout << "Voice record Detail: " << std::endl 
            << "Speaker: " << x.Speaker << std::endl
            << "duration (in hr): " << x.duration << std::endl
            << "record date: " << x.d_year << "-" << x.d_month << "-" << x.d_date << std::endl;
}

int main() {
  Book b;
  VoiceRecord v;
  b.getData();
  v.getData();
  TalkingBook t;
  std::cout << std::endl;
  t.display(b);
  std::cout << std::endl;
  t.display(v);
}
