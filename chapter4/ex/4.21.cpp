/*
  Exercise 4.21: Write a program to use a conditional operator to find the
  elements in a vector<int> that have odd value and double the value of
  each such element.
 */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char **argv) {
  cout << "Please enter integers:" << endl;

  vector<int> ivec;
  int ival;
  while (cin >> ival) {
    ivec.push_back(ival);
  }

  for (auto &i : ivec) {
    i = (i % 2) ? (i * 2) : (i);
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
