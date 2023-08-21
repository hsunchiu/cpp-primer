/*
  Exercise 9.27: Write a program to find and remove the odd-valued
  elements in a forward_list<int>.
 */

#include <forward_list>
#include <iostream>
using namespace std;

int main() {
  forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto prev = flst.before_begin(); // denotes element "off the start" of flst
  auto curr = flst.begin();
  while (curr != flst.end()) {
    if (*curr % 2)
      curr = flst.erase_after(prev);
    else {
      prev = curr;
      ++curr;
    }
  }

  for (auto i : flst) {
    cout << i << " ";
  }
  cout << endl;
}
