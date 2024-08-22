#include <cstring>
#include <iostream>

class Employee1;
class Employee2;
class Employee3;

class Employee1 {
  std::string name;
  std::string address;
  float salary;

public:
  Employee1(std::string n, std::string addr, float sal)
      : name(n), address(addr), salary(sal) {}

  friend float calculateTotalSalary(Employee1, Employee2, Employee3);
  friend void displayInfo(Employee1, Employee2, Employee3);
};

class Employee2 {
  std::string name;
  std::string address;
  float salary;

public:
  Employee2(std::string n, std::string addr, float sal)
      : name(n), address(addr), salary(sal) {}

  friend float calculateTotalSalary(Employee1, Employee2, Employee3);
  friend void displayInfo(Employee1, Employee2, Employee3);
};

class Employee3 {
  std::string name;
  std::string address;
  float salary;

public:
  Employee3(std::string n, std::string addr, float sal)
      : name(n), address(addr), salary(sal) {}

  friend float calculateTotalSalary(Employee1, Employee2, Employee3);
  friend void displayInfo(Employee1, Employee2, Employee3);
};

// Friend function to calculate the total salary
float calculateTotalSalary(Employee1 e1, Employee2 e2, Employee3 e3) {
  return e1.salary + e2.salary + e3.salary;
}

// Friend function to display all information
void displayInfo(Employee1 e1, Employee2 e2, Employee3 e3) {
  std::cout << "Employee 1: " << e1.name << ", Address: " << e1.address
            << ", Salary: " << e1.salary << std::endl;
  std::cout << "Employee 2: " << e2.name << ", Address: " << e2.address
            << ", Salary: " << e2.salary << std::endl;
  std::cout << "Employee 3: " << e3.name << ", Address: " << e3.address
            << ", Salary: " << e3.salary << std::endl;
  std::cout << "Total Salary: " << calculateTotalSalary(e1, e2, e3)
            << std::endl;
}

int main() {
  Employee1 e1("John Doe", "Nepal", 5000);
  Employee2 e2("Jane Smith", "India", 5500);
  Employee3 e3("Alice Johnson", "China", 6000);

  displayInfo(e1, e2, e3);
}
