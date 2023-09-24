/*
  Exercise 6.3: Write and test your own version of fact.
 */

#include <iostream>

using namespace std;

int fact(int val) {
  auto sum = 1;

  while (val > 1) {
    sum *= val;
    --val;
  }

  return sum;
}

int main() {
  for (auto n = 10; n > 0; --n) {
    cout << "fact(" << n << ")"
         << " = " << fact(n) << endl;
  }

  return 0;
}
