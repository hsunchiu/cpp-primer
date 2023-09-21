/*
  Exercise 3.35: Using pointers, write a program to set the elements in an array
  to zero.
 */

#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main() {
  int ia[10];

  for (auto beg = begin(ia); beg != end(ia); ++beg) {
    *beg = 0;
  }

  for (auto i : ia) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
