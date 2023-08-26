/*
  Exercise 10.27: In addition to unique (§ 10.2.3, p. 384), the library defines
  function named unique_copy that takes a third iterator denoting a destination
  into which to copy the unique elements. Write a program that uses unique_copy
  to copy the unique elements from a vector into an initially empty list.
 */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> v{"the",  "fox", "fox",  "jumps", "over",
                   "over", "the", "lazy", "brown", "dog"};
  list<string> l;
  unique_copy(v.cbegin(), v.cend(), back_inserter(l));

  for_each(l.cbegin(), l.cend(), [](const string &s) { cout << s << " "; });

  cout << endl;

  return 0;
}
