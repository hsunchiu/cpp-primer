/*
  Write a program to create a vector with ten int elements.
  Using an iterator, assign each element a value that is twice its current
  value. Test your program by printing the vector.
 */

#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  std::cout << "Please enter 10 integers:" << endl;

  vector<int> ivec;
  int i;
  while (cin >> i) {
    ivec.push_back(i);
  }

  if (ivec.size() == 10) {
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
      *it *= 2;
      cout << *it << ' ';
    }
    cout << endl;
  } else {
    cout << "the numbers of the integer is illegal!" << endl;
  }

  return 0;
}
