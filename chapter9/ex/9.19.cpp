/*
  Exercise 9,19: Rewrite the program from the previous exercise to use a
  list. List the changes you needed to make.
 */

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  string s;

  list<string> sl;
  while (cin >> s) {
    sl.push_back(s);
  }

  for (const auto &elem : sl) {
    cout << elem << endl;
  }
}
