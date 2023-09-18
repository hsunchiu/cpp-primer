/*
 * Exercise 2.18: Write code to change the value of a pointer. Write code to
 * change the value to which the pointer points.
 */

#include <iostream>
int main() {
  int i1 = 1, i2 = 2;
  int *ip = &i1;
  std::cout << "the pointer ip's value:" << ip << std::endl;
  ip = &i2;
  std::cout << "the pointer ip's value:" << ip << std::endl;

  std::cout << "i2(before changed):" << i2 << std::endl;

  *ip = 100;

  std::cout << "i2(after changed):" << i2 << std::endl;
}
