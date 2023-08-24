/*
  Exercise 10.2: Repeat the previous program, but read
  values into a list of strings.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  vector<string> vs;
  cout << "Please enter s set of strings" << endl;
  while (cin >> s) {
    vs.push_back(s);
  }

  cout << "Please enter a string you want to search" << endl;
  cin.clear();

  cin >> s;

  cout << "in the vector<string has " << count(vs.begin(), vs.end(), s)
       << " element(s) " << s << endl;

  return EXIT_SUCCESS;
}
