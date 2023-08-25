/*
  Exercise 10.25: In the exercises for § 10.3.2 (p. 392) you wrote a version
  of biggies that uses partition. Rewrite that function to use
  check_size and bind.
 */

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check_size(std::string &s, std::string::size_type sz) {
  return s.size() >= sz;
}

void biggies(vector<string> &vs, std::string::size_type sz) {

  sort(vs.begin(), vs.end());

  auto privot =
      partition(vs.begin(), vs.end(), bind(check_size, placeholders::_1, sz));

  vs.erase(privot, vs.end());
}

int main() {
  vector<string> vs{"the", "quick", "fox",   "jumps", "over",
                    "the", "lazy",  "brown", "dog"};

  biggies(vs, 4);

  for_each(vs.begin(), vs.end(), [](string &s) { cout << s << " "; });

  cout << endl;

  return 0;
}
