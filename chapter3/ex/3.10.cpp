/*
 * Exercise 3.10: Write a program that reads a string of characters including
 * punctuation and writes what was read but with the punctuation removed.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string input, output;

  while (getline(cin, input)) {
    if (input.size()) {
      for (auto c : input) {
        if (!ispunct(c)) {
          output += c;
        }
      }
      cout << input << endl;
      cout << output << endl;
      output = ""; // clear the output
    }
  }

  return 0;
}
