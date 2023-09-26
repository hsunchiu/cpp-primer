/*
  Exercise 9.16: Repeat the previous program, but compare elements in a
  list<int> to a vector<int>.
 */

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  list<int> ilst1 = {1, 2, 3, 4, 5};
  list<int> ilst2 = {1, 2, 3, 4, 5};

  cout << "ilst1 === ilst2: " << ((ilst1 == ilst2) ? "true" : "false") << endl;

  list<int> ilst3 = {1, 2, 3, 4, 5};
  list<int> ilst4 = {1, 2, 3, 5, 4};

  cout << "ilst3 == ilst4: " << ((ilst3 == ilst4) ? "true" : "false") << endl;

  vector<int> iv = {1, 2, 3, 4, 5};

  cout << "ilst1 == ivec: "
       << (equal(ilst1.cbegin(), ilst1.cend(), iv.cbegin(), iv.cend())
               ? "true"
               : "false")
       << endl;
}
