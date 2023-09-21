/*
 * Exercise 3.5: Write a program to read strings from the standard input,
 * concatenating what is read into one large string. Print the concatenated
 * string. Next, change the program to separate adjacent input strings by a
 * space.
 */

#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string in, s;
  while (cin >> in) {
    s = s + in + ' ';
  }

  cout << s << endl;

  std::stringstream ss(s);

  while (getline(ss, in, ' ')) {
    cout << in << endl;
  }

  return 0;
}
