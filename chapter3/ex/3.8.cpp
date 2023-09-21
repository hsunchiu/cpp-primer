/*
 * Exercise 3.7: What would happen if you define the loop control variable in
 * the previous exercise as type char? Predict the results and then change your
 * program to use a char to see if you were right.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string str;

  while (getline(cin, str)) {
    decltype(str.size()) i = 0;
    while (i < str.size()) {
      str[i] = 'X';
      i++;
    }
    cout << str << endl;

    for (i = 0; i < str.size(); i++) {
      str[i] = 'Y';
    }
    cout << str << endl;

    for (auto &c : str) {
      c = 'Z';
    }

    cout << str << endl;
  }

  return 0;
}
