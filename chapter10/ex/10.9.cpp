/*
  Exercise 10.9: Implement your own version of elimDups. Test your
  program by printing the vector after you read the input, after the call to
  unique, and after the call to erase
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
}
