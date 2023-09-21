#include <iostream>
#include <ostream>
int main() {
  int ia[0];

  auto p1 = ia;
  auto p2 = ia;

  std::cout << p1 << " " << p2 << std::endl;

  p1 += p1 - p2;

  std::cout << p1 << std::endl;
}
