/*
  Exercise 6.17: Write a function to determine whether a string contains any
  capital letters. Write a function to change a string to all lowercase. Do the
  parameters you used in these functions have the same type? If so, why? If not,
  why not?
 */

#include <cctype>
#include <iostream>
using namespace std;

void toLower(string &s) {
  for (auto &c : s) {
    c = tolower(c); // we need rewrite the c
  }
}

int main() {
  cout << "Please enter some words" << endl;
  string s;
  while (cin >> s) {
    toLower(s);
    cout << s;
  }

  cout << endl;

  return 0;
}
