#include <fstream>
#include <iostream>
int main() {
  std::ifstream fin;
  char str[200];

  fin.open("hello.txt");
  fin.getline(str, 80); // read single line
  std::cout << "\nFrom file: " << str << std::endl;
}
