/*
  Exercise 10.35: Now print the elements in reverse order using ordinary
  iterators.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto iter = vec.cend(); iter != vec.cbegin();) {
    cout << *--iter << " ";
  }
  cout << endl;
}
