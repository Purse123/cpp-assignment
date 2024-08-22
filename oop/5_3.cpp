#include <iostream>

class student {
protected:
  int roll_num;

public:
  student(int a) : roll_num(a) {}
  void put_number() { std::cout << "Roll: " << roll_num << std::endl; }
};

class Test : virtual public student {
protected:
  float sub1, sub2;

public:
  Test(int a, float p1, float p2) : student(a), sub1(p1), sub2(p2) {}
  void put_marks() {
    std::cout << "part1: " << sub1 << std::endl;
    std::cout << "part2: " << sub2 << std::endl;
  }
};

class Sports : virtual public student {
protected:
  float score;

public:
  Sports(int a, float s) : student(a), score(s) {}
  void put_score() { std::cout << "Sports: " << score << std::endl; }
};

class Results : public Test, public Sports {
  float result;

public:
  Results(int a, float p1, float p2, float s): student(a), Test(a, p1, p2), Sports(a, s) {
  }
  void results() {
    put_number();
    put_marks();
    put_score();
    std::cout << "Total Score: " << sub1 + sub2 + score << std::endl;
  }
};
int main() {
  Results r(116, 45, 45.5, 9);
  r.results();
}
