/*
  Exercise 11.12: Write a program to read a sequence of strings and ints,
  storing each into a pair. Store the pairs in a vector.
 */

#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

istream &read(istream &is, pair<string, int> &p) {

  is >> p.first;
  is >> p.second;

  return is;
}

int main() {
  vector<pair<string, int>> vec;

  pair<string, int> p;
  while (read(cin, p)) {
    vec.push_back(p);
  }

  for (const auto &w : vec) {
    cout << w.first << " " << w.second << endl;
  }
}
