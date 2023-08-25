/*
  Exercise 10.19: Rewrite the previous exercise to use stable_partition,
  which like stable_sort maintains the original element order in the
  paritioned sequence.
 */

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

//! from ex 10.9
void elimdups(std::vector<std::string> &vs) {
  std::sort(vs.begin(), vs.end());
  auto new_end = std::unique(vs.begin(), vs.end());
  vs.erase(new_end, vs.end());
}

//! ex10.19
void biggies(std::vector<std::string> &vs, std::size_t sz) {
  elimdups(vs);

  auto pivot =
      stable_partition(vs.begin(), vs.end(),
                       [sz](const std::string &s) { return s.size() >= sz; });

  for (auto it = vs.cbegin(); it != pivot; ++it)
    std::cout << *it << " ";
}

int main() {
  std::vector<std::string> vs{"the",  "quick", "red",  "fox", "jumps",
                              "over", "the",   "slow", "red", "turtle"};

  biggies(vs, 4);

  std::cout << std::endl;

  return 0;
}
