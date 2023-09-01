/*
  Exercise 12.7: Redo the previous exercise, this time using shared_ptr.
 */

#include <iostream>
#include <istream>
#include <memory>
#include <ostream>
#include <vector>

using namespace std;

istream &read(istream &is, shared_ptr<vector<int>> p) {

  int buf;

  while (is >> buf) {
    p->push_back(buf);
  }

  return is;
}

ostream &print(ostream &os, shared_ptr<vector<int>> p) {

  for (const auto &v : *p) {
    os << v << " ";
  }

  // maybe need the newline
  //  cout << endl;
  return os;
}

int main() {
  auto p = make_shared<vector<int>>();

  read(cin, p);

  print(cout, p) << endl;
}
