/*
  Exercise 10.18: Rewrite biggies to use partition instead of find_if.
  We described the partition algorithm in exercise 10.13 in § 10.3.1 (p.
  387).
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void elimDups(std::vector<std::string> &words) {
  sort(words.begin(), words.end());

  auto end_unique = unique(words.begin(), words.end());

  words.erase(end_unique, words.end());
}

void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz) {

  elimDups(words);

  auto sep =
      std::partition(words.begin(), words.end(),
                     [sz](const std::string &ths) { return ths.size() > sz; });

  for_each(words.begin(), sep,
           [](const std::string &ths) { std::cout << ths << " "; });
}

int main() {
  std::vector<std::string> vs = {"hello", "world", "hi", "ni", "hao"};

  biggies(vs, 2);

  std::cout << std::endl;

  return 0;
}
