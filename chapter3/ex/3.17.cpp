/*
 *  Exercise 3.17: Read a sequence of words from cin and store the values a
 * vector. After you’ve read all the words, process the vector and change
 * each word to uppercase. Print the transformed elements, eight words to a
 * line.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string word;
  vector<string> vec;

  while (cin >> word) {
    vec.push_back(word);
  }

  for (auto &str : vec) {
    for (auto &c : str) {
      c = toupper(c);
    }
  }

  for (decltype(vec.size()) i = 0; i < vec.size(); i++) {
    if (i % 7 == 0 && i != 0)
      cout << vec[i] << endl;
    else
      cout << vec[i] << " ";
  }

  return 0;
}
