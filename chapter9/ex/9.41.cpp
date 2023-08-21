/*
  Exercise 9.41: Write a program that initializes a string from a
  vector<char>.
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<char> vc = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
  string s;

  for (const auto c : vc) {
    s.push_back(c);
  }

  // s.push_back('\0');

  cout << s << endl;
  return 0;
}
