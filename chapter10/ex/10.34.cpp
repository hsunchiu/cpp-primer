/*
  Exercise 10.34: Use reverse_iterators to print a vector in reverse
  order.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> vs{"hello", "world", "ni", "hao"};

  for (auto r_iter = vs.crbegin(); r_iter != vs.crend(); r_iter++) {
    cout << *r_iter << " ";
  }

  cout << endl;

  return 0;
}
