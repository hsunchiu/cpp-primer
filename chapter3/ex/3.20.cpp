/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-to-
last, and so on.
 */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  int var;
  vector<int> ivec;
  while (cin >> var) {
    ivec.push_back(var);
  }

  if (ivec.empty()) {
    cout << "input at least on integer!" << endl;
  } else if (ivec.size() == 1) {
    cout << ivec[0] << " don't have any adjacent elements." << endl;

    return -1;
  } else {
    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; i++) {
      cout << ivec[i] + ivec[i + 1] << ' ';
    }
    cout << endl;
  }

  decltype(ivec.size()) size = ivec.size();
  if (size % 2 != 0)
    size = size / 2 + 1;
  else
    size = size / 2;

  for (decltype(ivec.size()) i = 0; i < size; i++) {
    cout << ivec[i] + ivec[ivec.size() - i - 1] << ' ';
  }
  cout << endl;

  return 0;
}
