/*
  Exercise 11.20: Rewrite the word-counting program from § 11.1 (p. 421) to
  use insert instead of subscripting. Which program do you think is easier to
  write and read? Explain your reasoning.
 */

// I think it's hard to read and code.

#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string, size_t> word_cout;

  string word;

  while (cin >> word) {
    auto ret = word_cout.insert({word, 1});

    if (!ret.second) {
      ++ret.first->second;
    }
  }
}
