/*
  Exercise 9.26: Using the following definition of ia, copy ia into a vector
  and into a list. Use the single-iterator form of erase to remove the
  elements with odd values from your list and the even values from your
  vector.

  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
 */

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  list<int> il;
  vector<int> iv;

  il.assign(begin(ia), end(ia));
  iv.assign(begin(ia), end(ia));

  auto it1 = il.begin();
  while (it1 != il.end()) {
    if (*it1 % 2) {
      it1 = il.erase(it1);
    } else {
      ++it1;
    }
  }

  cout << "ilst(odd removed) is ";
  for (auto i : il) {
    cout << i << " ";
  }
  cout << endl;

  auto it2 = iv.begin();
  while (it2 != iv.end()) {
    if (!*it2 % 2) {
      it2 = iv.erase(it2);
    } else {
      ++it2;
    }
  }

  cout << "ivector(even removed) is ";
  for (auto i : iv) {
    cout << i << " ";
  }

  cout << endl;

  return 0;
}
