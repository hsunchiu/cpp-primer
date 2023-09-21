/*
 * Exercise 3.14: Write a program to read a sequence of ints from cin and
 * store those values in a vector.
 */

#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main() {
  vector<int> ivec;
  int i;
  while (cin >> i) {
    ivec.push_back(i);
  }

  return 0;
}
