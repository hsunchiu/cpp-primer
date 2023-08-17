#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string>
std::istream &func(std::istream &is) {
  std::string buf;
  while (is >> buf)
    std::cout << buf << std::endl;

  is.clear();
  return is;
}

int main() {
  std::istringstream iss("hello world");
  func(iss);
  return 0;
}
