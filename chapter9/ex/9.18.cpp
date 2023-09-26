/*
  Exercise 9.18: Write a program to read a sequence of strings from the
  standard input into a deque. Use iterators to write a loop to print the
  elements in the deque.
 */

#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  deque<string> sd;

  while (cin >> s) {
    sd.push_back(s);
  }

  auto iter = sd.begin();

  while (iter != sd.end()) {
    cout << *iter << endl;
    ++iter;
  }
}
