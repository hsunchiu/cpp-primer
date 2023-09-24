/*
  Exercise 6.55: Write four functions that add, subtract, multiply, and divide
  two int values. Store pointers to these values in your vector from the
  previous exercise.
 */
#include <vector>
int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mult(int a, int b) { return a * b; }

int divide(int a, int b) { return a / b; }

int main() {
  std::vector<int (*)(int, int)> fpv;

  fpv.push_back(add);
  fpv.push_back(sub);
  fpv.push_back(mult);
  fpv.push_back(divide);
}
