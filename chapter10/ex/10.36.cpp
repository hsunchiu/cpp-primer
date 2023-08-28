/*
  Exercise 10.36: Use find to find the last element in a list of ints with
  value 0.
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec = {1, 2, 4, 5, 6, 0, 10, 60, 0, 0};
  auto found = ::find(vec.crbegin(), vec.crend(), 0);

  if (found != vec.crend() && found != vec.crbegin()) {
    cout << "find the last " << *found << " in front of " << *found.base()
         << endl;
  } else if (found == vec.crbegin()) {
    cout << "find the last " << *found << " in the last elements" << endl;
  }
}
