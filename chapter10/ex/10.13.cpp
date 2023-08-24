/*
  Exercise 10.13: The library defines an algorithm named partition that
  takes a predicate and partitions the container so that values for which the
  predicate is true appear in the first part and those for which the predicate
  is false appear in the second part. The algorithm returns an iterator just
  past the last element for which the predicate returned true. Write a function
  that takes a string and returns a bool indicating whether the string has five
  characters or more. Use that function to partition words. Print the elements
  that have five or more characters.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool func(const std::string s) { return s.size() > 5; }

int main() {

  vector<string> vs = {"hello", "world", "a", "b", "c", "hello world"};

  partition(vs.begin(), vs.end(), func);

  for (auto s : vs) {
    cout << s << endl;
  }
  cout << endl;

  return 0;
}
