/*
  Exercise 11.38: Rewrite the word-counting (§ 11.1, p. 421) and word-
  transformation (§ 11.3.6, p. 440) programs to use an unordered_map.
 */

// word_count
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, size_t> word_count;
  string word;

  while (cin >> word) {
    ++word_count[word];
  }
  for (const auto &w : word_count) {
    // print the result
    cout << w.first << " occurs" << w.second << " time(s)" << endl;
  }
}
