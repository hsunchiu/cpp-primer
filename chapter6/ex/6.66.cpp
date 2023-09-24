/*
  Exercise 6.56: Call each element in the vector and print their result.
 */
#include <iostream>
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

  int a = 10, b = 5;

  for (auto f : fpv) {
    auto result = f(a, b);
    std::cout << result << std::endl;
  }
}
