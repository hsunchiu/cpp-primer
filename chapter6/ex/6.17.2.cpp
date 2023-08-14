#include <cctype>
#include <iostream>
using namespace std;

void toLower(string &s) {
  for (auto &c : s) {
    c = tolower(c);              // we need rewrite the c
  }
}

int main() {
  cout << "Please enter some words" << endl;
  string s;
  while (cin >> s) {
    toLower(s);
    cout << s; 
  }

  cout << endl;

  return 0;
}
