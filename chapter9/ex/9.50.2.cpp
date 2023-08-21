/*
  Exercise 9.50: Write a program to process a vector<string>s whose
  elements represent integral values. Produce the sum of all the elements in
  that vector. Change the program so that it sums of strings that represent
  floating-point values.
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> vs;
  string s;

  while (cin >> s) {
    vs.push_back(s);
  }

  double sum = 0.0;

  for (auto s : vs) {
    sum += stof(s);
  }

  cout << "the sum is " << sum << endl;

  return EXIT_SUCCESS;
}
