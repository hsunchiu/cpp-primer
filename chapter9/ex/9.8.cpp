/*
  Exercise 9.8: What type should be used to read elements in a list of
  strings? To write them?
 */

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  list<string> slst = {"hello", "world"};

  // use iterator

  list<string>::const_iterator beg1 = slst.begin();
  list<string>::const_iterator end1 = slst.end();

  for (; beg1 != end1; ++beg1) {
    cout << *beg1 << endl;
  }

  // use for-range statements
  for (auto c : slst) {
    cout << c << endl;
  }
}
