/*
 * Exercise 2.3: What output will the following code produce?

 * unsigned u = 10, u2 = 42;
 * std::cout << u2 - u << std::endl;
 * std::cout << u - u2 << std::endl

 *  int i = 10, i2 = 42;
 * std::cout << i2 - i << std::endl;
 * std::cout << i - i2 << std::endl;

 * std::cout << i - u << std::endl;
 * std::cout << u - i << std::endl;

 */

#include <iostream>
using namespace std;

int main() {
  unsigned u1 = 10, u2 = 42;

  cout << u2 - u1 << endl;
  cout << u1 - u2 << endl;

  int i1 = 10, i2 = 42;

  cout << i2 - i1 << endl;
  cout << i1 - i2 << endl;
  cout << i1 - u1 << endl;
  cout << u1 - i1 << endl;
}
