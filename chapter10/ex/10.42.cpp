/*
  Exercise 10.42: Reimplement the program that eliminated duplicate words
  that we wrote in § 10.2.3 (p. 383) to use a list instead of a vector.
 */

#include <iostream>
#include <list>
#include <string>

using namespace std;

void delimDup(list<string> &l) {
  l.sort();
  l.unique();
}

int main() {
  list<string> l{"the",  "fox", "quick", "jumps",
                 "over", "the", "slow",  "turtle"};

  delimDup(l);

  for (const auto &e : l) {
    cout << e << " ";
  }

  cout << endl;
}
