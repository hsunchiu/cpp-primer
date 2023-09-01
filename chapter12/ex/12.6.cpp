/*
  Exercise 12.6: Write a function that returns a dynamically allocated vector
  of ints. Pass that vector to another function that reads the standard input
  to give values to the elements. Pass the vector to another function to print
  the values that were read. Remember to delete the vector at the
  appropriate time.
 */

#include <iostream>
#include <istream>
#include <vector>

using namespace std;

// p2v donates the pointer to a vector
istream &read(istream &is, vector<int> *p2v) {
  int buf;

  while (is >> buf) {
    p2v->push_back(buf);
  }

  return is;
}

ostream &print(ostream &os, vector<int> *p2v) {
  for (const auto &v : *p2v) {
    cout << v << " ";
  }

  return os;
}

int main() {

  auto p2v = new (vector<int>){1, 2, 3, 4, 5, 6};

  while (read(cin, p2v))
    ;

  print(cout, p2v);

  delete p2v;

  return 0;
}
