/*
  Exercise 9.11: Show an example of each of the six ways to create and
  initialize a vector. Explain what values each vector contains.
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<int> iv1; // empty, using default constructor.
  iv1.emplace_back(1, 2, 3, 4, 5);
  vector<int> iv2(iv1); // copy iv1 to iv2

  vector<int> iv3(10);    // a vector with 10 element of int `0`.
  vector<int> iv4(10, 5); // a vector with 10 element of  int `5`

  vector<int> iv5(iv4.begin(), iv4.end()); // use iterator to constructor iv5

  vector<int> iv6 = {1, 2, 3, 4, 5, 6}; // list initialize.
}
