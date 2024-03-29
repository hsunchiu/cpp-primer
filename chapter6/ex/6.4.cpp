/*
  Exercise 6.4: Write a function that interacts with the user, asking for a
  number and generating the factorial of that number. Call this function from
  main.
 */
#include <iostream>
using namespace std;

int fact(int v) {
  auto sum = 1;

  while (v > 1)
    sum *= v--;
  return sum;
}

int main() {
  cout << "Please enter a possive number and press enter" << endl;
  int v;
  while (cin >> v) {
    cout << "fact(" << v << ")"
         << " = " << fact(v) << endl;
  }

  return 0;
}
