#include <iostream>

// Base class for student details
class student {
protected:
  int roll_no;

public:
  void get_roll_no(int r) { roll_no = r; }
  void put_roll_no() { std::cout << "Roll No: " << roll_no << std::endl; }
};

// Base class for sports details
class sports {
protected:
  float score;

public:
  void get_score(float s) { score = s; }
  void put_score() { std::cout << "Sports Score: " << score << std::endl; }
};

// Derived class test inheriting from student
class test : public student {
protected:
  float math_marks;
  float physics_marks;

public:
  void get_marks(float m, float p) {
    math_marks = m;
    physics_marks = p;
  }
  void put_marks() {
    std::cout << "Math Marks: " << math_marks << std::endl
              << "Physics Marks: " << physics_marks << std::endl;
  }
};

// Derived class result inheriting from test and sports
class result : public test, public sports {
  float total;

public:
  void display() {
    total = math_marks + physics_marks + score;
    put_roll_no();
    put_marks();
    put_score();
    std::cout << "Total Score: " << total << std::endl;
  }
};

int main() {
  result student_result;

  student_result.get_roll_no(101);
  student_result.get_marks(85.5, 90.0);
  student_result.get_score(88.0);

  student_result.display();

  return 0;
}
