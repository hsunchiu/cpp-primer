/*
  Exercise 12.23: Write a program to concatenate two string literals, putting
  the result in a dynamically allocated array of char. Write a program to
  concatenate two library strings that have the same value as the literals
  used in the first program.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

  // read two string
  string s1;
  string s2;
  cin >> s1 >> s2;

  char *p = new char[s1.size() + s2.size() + 1];

  // TODO: how to copy?
  s1.copy(p, s1.size());
  s2.copy(&p[s1.size()], s2.size());

  // TODO: does the char array has `\0`;
  // for safe, the last one element of the char, I use `\0`
  p[s1.size() + s2.size()] = '\0';

  // TODO: how to output the restul?
  for (size_t i = 0; i != (s1.size() + s2.size() + 1); ++i) {
    cout << p[i];
  }

  delete[] p;
}
