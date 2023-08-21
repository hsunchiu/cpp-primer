/*
  Exercise 9.50: Write a program to process a vector<string>s whose
  elements represent integral values. Produce the sum of all the elements in
  that vector. Change the program so that it sums of strings that represent
  floating-point values.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> vs;

  string s;

  cout << "Please enter some integral string :" << endl;

  // we don't check the input
  while (cin >> s) {
    vs.push_back(s);
  }

  // convert string to int and get the sum
  int sum = 0;

  for (auto s : vs) {
    sum += stoi(s);
  }

  cout << "the sum is " << sum << endl;

  return 0;
}
