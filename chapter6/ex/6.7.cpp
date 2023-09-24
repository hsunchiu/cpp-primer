/*
  Exercise 6.7: Write a function that returns 0 when it is first called and then
  generates numbers in sequence each time it is called again.
 */

#include <iostream>
using namespace std;

int call() {
  static int count = 0;
  return count++;
}

int main() {

  for (auto i = 1; i < 10; i++) {
    cout << "the " << i << "'s call() = " << call() << endl;
  }

  return 0;
}
