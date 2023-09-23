/*
  Exercise 5.5: Using an if–else statement, write your own version of the
  program to generate the letter grade from a numeric grade.
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

int main() {

  int grade;
  string lettergrade;

  cin >> grade;

  // if failing grade, no need to check for a plus or minus
  if (grade < 60) {
    lettergrade = scores[0];
  } else {
    lettergrade = scores[(grade - 50) /
                         10]; // fetch the letter grade if (grade != 100) // add
                              // plus or minus only if not already an A++
    if (grade % 10 > 7)
      lettergrade += '+'; // grades ending in 8 or 9 get a +
    else if (grade % 10 < 3)
      lettergrade += '-'; // grades ending in 0, 1, or 2 get a
  }

  cout << lettergrade << endl;
}
