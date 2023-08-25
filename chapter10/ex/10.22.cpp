/*
 Exercise 10.22: Rewrite the program to count words of size 6 or less using
 functions in place of the lambdas.
 */
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check_size(const string &s, string::size_type sz) {
  return s.size() <= sz;
}

int main() {
  auto lambda = bind(check_size, placeholders::_1, 4);
  vector<string> vs{"the", "quick", "fox",   "jumps", "over",
                    "the", "lazy",  "brown", "dog"};

  cout << count_if(vs.begin(), vs.end(), lambda) << endl;
}
