/*
  Exercise 9.42: Given that you want to read a character at a time into a
  string, and you know that you need to read at least 100 characters, how
  might you improve the performance of your program?
 */

#include <iostream>
#include <istream>
#include <ostream>
#include <string>

using namespace std;

istream &read(istream &is, string &s, size_t size = 100) {
  // pre-allocate size of the memory.
  s.reserve(size);

  char c;

  is >> c;

  s.push_back(c);

  return is;
}

int main() {

  string s;
  while (read(cin, s))
    ;

  cout << s << endl;
}
