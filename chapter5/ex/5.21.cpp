/*
  Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so
  that it looks only for duplicated words that start with an uppercase letter.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
  string curr, prev;
  bool no_twice = false;

  while (cin >> curr) {
    if (!isupper(curr[0])) {
      continue;
    }

    if (prev == curr) {
      cout << curr << " occurs twice in succession." << endl;
      no_twice = true;
      break;
    } else {
      prev = curr;
    }
  }

  if (!no_twice)
    cout << "no word was repeated." << endl;

  return 0;
}
