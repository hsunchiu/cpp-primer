/*
 * Exercise 1.15: Write programs that contain the common errors discussed in
 * the box on page 16. Familiarize yourself with the messages the compiler
 * generates.
 */

#include <iostream>

int main() {
  int v1 = 0, v2 = 0;

  // declaration error, should declare v or change it to `v1`
  std::cin >> v >> v2;

  // can't find cout, need namespace  `std::` for `cout` or add `using namespace
  // std`
  cout << v1 + v2 << std::endl;

  return 0;
}
