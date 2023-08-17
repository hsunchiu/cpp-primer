#include <iostream>
#include <istream>
#include <string>
std::istream &func(std::istream &is) {

  std::string buf;
  while (is >> buf)
    std::cout << buf;

  is.clear();
  return is;
}

int main() {
  func(std::cin);
  return 0;
}
