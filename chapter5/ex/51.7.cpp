/*
  Exercise 5.17: Given two vectors of ints, write a program to determine whether
  one vector is a prefix of the other. For vectors of unequal length, compare
  the number of elements of the smaller vector. For example, given the vectors
  containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program
  should return true.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char **argv) {
  vector<int> ivec1{0, 1, 1, 2};
  vector<int> ivec2{0, 1, 1, 2, 3, 5};

  auto size = ivec1.size() < ivec2.size() ? ivec1.size() : ivec2.size();
  for (decltype(ivec1.size()) i = 0; i != size; ++i) {
    if (ivec1[i] != ivec2[i]) {
      cout << "false" << endl;
      return 0;
    }
  }

  cout << "true" << endl;
  return 0;
}
