/*
  Exercise 3.41: Write a program to initialize a vector from an array of
  ints.
 */

#include <iostream>
#include <vector>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

void print_ivec(const vector<int> &ivec) {
  for (auto i : ivec) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  constexpr int INT_ARRAY_SIZE = 10;
  int ia[INT_ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  /*the code is illegal*/
  // vector<int> ivec(ia);

  // print_ivec(ivec);

  vector<int> ivec2(begin(ia), end(ia));

  print_ivec(ivec2);

  vector<int> ivec3(ia + 2, ia + 5);

  print_ivec(ivec3);

  return 0;
}
