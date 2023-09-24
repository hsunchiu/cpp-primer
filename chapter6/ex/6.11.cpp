/*
  Exercise 6.11: Write and test your own version of reset that takes a
  reference.
 */

#include <cmath>
#include <iostream>
using namespace std;

void reset(int &x) { x = 0; }

int main() {
  int x = 100;
  cout << "reset(" << x << ") = ";
  reset(x);
  cout << x << endl;
}
