/*
  Exercise 10.3: Use accumulate to sum the elements in a vector<int>.
 */

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {

  const vector<int> iv = {
      1, 2, 3, 4, 5, 6,
  };

  auto sum = accumulate(iv.begin(), iv.end(), 0);

  cout << sum << endl;
}
