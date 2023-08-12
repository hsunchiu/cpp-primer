#include <iostream>

int main() {
  int val = 10;
  while (--val) { // not include 10 and 0
    std::cout << val << std::endl;
  }

  return 0;
}
