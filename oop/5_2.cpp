#include <iostream>

class student {
protected:
  int roll_num;

public:
  void get_number(int a) { roll_num = a; }
  void put_number() { std::cout << "Roll: " << roll_num << std::endl; }
};

class Test : virtual public student {
protected:
  float sub1, sub2;

public:
  void get_marks(float p1, float p2) {
    sub1 = p1;
    sub2 = p2;
  }
  void put_marks() {
    std::cout << "part1: " << sub1 << std::endl;
    std::cout << "part2: " << sub2 << std::endl;
  }
};

class Sports : virtual public student {
protected:
  float score;

public:
  void get_score(float s) { score = s; }
  void put_score() { std::cout << "Sports: " << score << std::endl; }
};

class Results : public Test, public Sports {
  float result;

public:
  void results() {
    put_number();
    put_marks();
    put_score();
    std::cout << "Total Score: " << sub1 + sub2 + score << std::endl;
  }
};
int main() {
  Results r;
  r.get_number(116);
  r.get_marks(45, 45.5);
  r.get_score(9);
  r.results();
}
