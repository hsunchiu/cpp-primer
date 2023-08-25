/*
  Exercise 10.16: Write your own version of the biggies function using
  lambdas.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

//! from ex 10.9
void elimdups(std::vector<std::string> &vs) {
  std::sort(vs.begin(), vs.end());
  auto new_end = std::unique(vs.begin(), vs.end());
  vs.erase(new_end, vs.end());
}

void biggies(std::vector<std::string> &vs, std::size_t sz) {
  using std::string;

  elimdups(vs);

  //! sort by size, but maintain alphabetical order for same size.
  std::stable_sort(vs.begin(), vs.end(),
                   [](string const &lhs, string const &rhs) {
                     return lhs.size() < rhs.size();
                   });

  //! get an iterator to the first one whose size() is >= sz
  auto wc = std::find_if(vs.begin(), vs.end(),
                         [sz](string const &s) { return s.size() >= sz; });

  //! print the biggies
  std::for_each(wc, vs.end(), [](const string &s) { std::cout << s << " "; });
}

int main() {
  std::vector<std::string> vs{"1234", "12345", "1234", "hi~",
                              "alan", "alan",  "cp"};

  biggies(vs, 3);
  std::cout << std::endl;

  return 0;
}
