/*
  Exercise 10.6: Using fill_n, write a program to set a sequence of int
  values to 0.
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8};

  for (const auto i : iv) {
    cout << i << " ";
  }
  cout << endl;

  fill_n(iv.begin(), iv.size(), 0);

  for (const auto i : iv) {
    cout << i << " ";
  }
  cout << endl;
}
