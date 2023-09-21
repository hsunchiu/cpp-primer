/*
  Exercise 3.31: Write a program to define an array of ten ints. Give each
  element the same value as its position in the array.
 */

#include <iostream>

using namespace std;

int main() {
  constexpr size_t array_size = 10;

  int ia[array_size];

  for (size_t i; i != array_size; ++i) {
    ia[i] = i;
  }

  for (auto i : ia) {
    cout << i << endl;
  }

  return 0;
}
