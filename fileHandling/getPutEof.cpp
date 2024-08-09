#include <fstream>
#include <iostream>
int main() {
  std::ifstream fin;
  char ch;
  fin.open("hello.txt");

  while (!fin.eof()) {
    fin.get(ch);
    std::cout.put(ch);
  }
  fin.close();
}
