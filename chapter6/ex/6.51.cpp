/*
  Exercise 6.51: Write all four versions of f. Each function should print a
  distinguishing message. Check your answers for the previous exercise. If your
  answers were  incorrect, study this section until you understand why your
  answers were wrong.
*/

/*
void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);
 */

#include <iostream>
#include <ostream>

void f() { std::cout << "call f()" << std::endl; }

void f(int) { std::cout << "call f(int)" << std::endl; }

void f(int, int) { std::cout << "call f(int,int)" << std::endl; }

void f(double, double = 3.14) {
  std::cout << "call f(double, double = 3.14)" << std::endl;
}

int main() {

  // f(2.56, 42);

  f(42);

  f(42, 0);

  f(2.56, 3.14);
}
