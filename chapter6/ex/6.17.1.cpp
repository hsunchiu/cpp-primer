/*
  Exercise 6.17: Write a function to determine whether a string contains any
  capital letters. Write a function to change a string to all lowercase. Do the
  parameters you used in these functions have the same type? If so, why? If not,
  why not?
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool hasUpper(const string &s) {
  for (auto c : s)
    if (isupper(c))
      return true;
  return false;
}

int main() {
  vector<string> vs;
  string s;

  while (cin >> s) {
    vs.push_back(s);
  }

  for (auto s : vs) {
    cout << s << " has "
         << "upper:" << (hasUpper(s) ? "true" : "false") << endl;
  }

  return 0;
}
