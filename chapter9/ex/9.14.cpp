/*
  Exercise 9.14: Write a program to assign the elements from a list of
  char* pointers to C-style character strings to a vector of strings.
 */
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main() {
  list<const char *> clist = {"hello", "world"};

  vector<string> sv;

  sv.assign(clist.begin(), clist.end());

  for (const auto &s : sv) {
    cout << s << endl;
  }
}
