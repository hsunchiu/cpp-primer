/*
  Exercise 3.42: Write a program to copy a vector of ints into an array of
  ints.
 */

#include <iostream>
#include <vector>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

#if 0
inline void print_int_array(int * array)
{
  for(auto it = begin(array); it != end(array); ++it){
    cout << *it << " ";
  }
  cout << endl;
}
#endif

int main(int argc, char **agrv) {
  constexpr size_t INT_ARRAY_SIZE = 10;
  int ia[INT_ARRAY_SIZE];

  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto it = ivec.begin(); it != ivec.end(); ++it) {
    ia[it - ivec.begin()] = *it;
  }

  // print_int_array(ia);
  for (auto it = begin(ia); it != end(ia); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
