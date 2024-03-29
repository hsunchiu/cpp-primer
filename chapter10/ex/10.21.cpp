/*
 Exercise 10.21: Write a lambda that captures a local int variable and
 decrements that variable until it reaches 0. Once the variable is 0 additional
 calls should no longer decrement the variable. The lambda should return a
 bool that indicates whether the captured variable is 0.
 */
#include <iostream>
using namespace std;

int main() {
  int i = -100;

  auto lambda = [&]() {
    ++i;
    return i == 0;
  };

  while (!lambda()) {
    cout << i << endl;
  }

  return 0;
}
