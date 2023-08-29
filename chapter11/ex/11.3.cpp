/*
  Exercise 11.3: Write your own version of the word-counting program.
 */
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string, size_t> word_count;
  string word;
  while (cin >> word) {
    ++word_count[word];
  }

  for (auto w : word_count) {
    cout << w.first << " ocurrs " << w.second
         << ((w.second > 1) ? " time" : " times") << endl;
  }

  return 0;
}
