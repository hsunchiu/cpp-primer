/*
  Exercise 5.14: Write a program to read strings from standard input looking for
  duplicated words. The program should find places in the input where one word
  is followed immediately by itself. Keep track of the largest number of times a
  single repetition occurs and which word is repeated. Print the maximum number
  of duplicates, or else print a message saying that no word was repeated. For
  example, if the input is

  how now now now brown cow cow

  the output should indicate that the word now occurred three times.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  string preWord;
  string word;
  size_t max = 0;
  string max_word;
  size_t cnt = 0;

  while (cin >> word) {
    if (preWord == word) {
      ++cnt;
      if (cnt > max) {
        max = cnt;
        max_word = word; // record the max repeated word.
      }
    } else {
      cnt = 1; // reset the cnt = 1;
    }

    preWord = word;
  }

  cout << max_word << " occurs " << max << " time(s). " << endl;
}
