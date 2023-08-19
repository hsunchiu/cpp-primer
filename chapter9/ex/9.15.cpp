/*
Exercise 9.15: Write a program to determine whether two vector<int>s
are equal.
 */
#include <iostream>
#include <istream>
#include <iterator>
#include <ostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> iv1 = {1, 2, 3, 4, 5};
  vector<int> iv2 = {1, 2, 3, 4, 5};

  cout << "iv1 == iv2: " << ((iv1 == iv2) ? "true" : "false") << endl;
}
