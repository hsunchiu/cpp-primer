/*
  Exercise 4.22: Extend the program that assigned high pass, pass, and fail
  grades to also assign low pass for grades between 60 and 75 inclusive. Write
  two versions: One version that uses only conditional operators; the other
  should use one or more if statements. Which version do you think is easier
  to understand and why?
 */

// I like if else version, it 's more clear for me.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
  int grade;
  while (cin >> grade && grade >= 0 && grade <= 100) {
    string finalgrade = (grade > 90)   ? "high pass"
                        : (grade < 60) ? "fail"
                                       : "pass";
    cout << grade << " " << finalgrade << endl;

    if (grade > 90) {
      finalgrade = "high pass";
    } else if (grade < 60) {
      finalgrade = "fail";
    } else {
      finalgrade = "pass";
    }
    cout << grade << " " << finalgrade << endl;
  }

  return 0;
}
