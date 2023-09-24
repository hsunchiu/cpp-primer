/*
  Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to
  use references instead of pointers to swap the value of two ints. Which
  version do you think would be easier to use and why?
 */
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}
// I think swap(int&, int&) is better, because when call swap, I don't access
// the the value;
int main() {
  int a = 1, b = 2;
  cout << "a"
       << "=" << a << ","
       << "b=" << b << endl;
  swap(a, b);

  cout << "swap(a,b):" << endl << "a=" << a << ",b=" << b << endl;

  return 0;
}
