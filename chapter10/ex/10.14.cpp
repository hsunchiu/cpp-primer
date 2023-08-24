/*
  Exercise 10.14: Write a lambda that takes two ints and returns their sum.
 */

#include <iostream>
using namespace std;

int main() {
  int v1 = 10;
  int v2 = 20;

  cout << [](int v1, int v2) { return v1 + v2; }(v1, v2) << endl;
}
