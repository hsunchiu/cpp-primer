#include <iostream>

int main() {

  int i = 0;
  while (++i, i <= 10) {
    std::cout << i << std::endl;
  }
  while (int i = 10) {
  }
}
