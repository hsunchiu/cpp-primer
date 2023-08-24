/*
  Exercise 10.4: Assuming v is a vector<double>, what, if anything, is
  wrong with calling accumulate(v.cbegin(), v.cend(), 0)?
 */

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<double> dv = {1.0, 2.0, 3.0, 4.0, 5.1};
  // the sum type is int and the, every element in dv  will be converted to int.
  auto sum = accumulate(dv.begin(), dv.end(), 0);

  cout << sum << endl;
}
