/*
  Exercise 10.15: Write a lambda that captures an int from its enclosing
  function and takes an int parameter. The lambda should return the sum of
  the captured int and the int parameter.
 */

#include <iostream>

using namespace std;

int main() {
  int v1 = 10;
  int v2 = 20;

  auto lambda = [v1](int b) { return v1 + b; };

  cout << lambda(v2) << endl;
}
