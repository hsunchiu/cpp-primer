/*
  Exercise 10.31: Update the program from the previous exercise so that it
  prints only the unique elements. Your program should use unqiue_copy (§
  10.4.1, p. 403).
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  istream_iterator<int> in_iter(cin), eof;
  ostream_iterator<int> out_iter(cout, " ");

  std::vector<int> vec;

  while (in_iter != eof) {
    vec.push_back(*in_iter++);
  }

  std::sort(vec.begin(), vec.end());
  std::unique_copy(vec.cbegin(), vec.cend(), out_iter);

  return 0;
}
