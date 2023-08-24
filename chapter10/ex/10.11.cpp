/*
  Exercise 10.11: Write a program that uses stable_sort and isShorter
  to sort a vector passed to your version of elimDups. Print the vector to
  verify that your program is correct.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void elimDups(vector<string> &words) {
  // sort words alphabetically so we can find the duplicates
  sort(words.begin(), words.end());
  // unique  reorders the input range so that each word appears once in the
  // front portion of the range and returns an iterator one past the unique
  // range
  auto end_unique = unique(words.begin(), words.end());
  // erase uses a vector operation to remove the nonunique elements
  words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

int main() {
  vector<string> vs{"the",  "quick", "fox",  "jumps",
                    "over", "the",   "lazy", "dog"};

  for (auto s : vs) {
    cout << s << " ";
  }

  cout << endl;

  elimDups(vs);

  for (auto s : vs) {
    cout << s << " ";
  }

  cout << endl;

  stable_sort(vs.begin(), vs.end(), isShorter);

  for (auto s : vs) {
    cout << s << " ";
  }

  cout << endl;
}
