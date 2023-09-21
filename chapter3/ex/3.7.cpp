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
    for (char c : str) { // will not change str

      c = 'X';
    }
    cout << str << endl;
  }

  return 0;
}
