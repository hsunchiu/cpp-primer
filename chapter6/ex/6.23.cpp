/*
  Exercise 6.23: Write your own versions of each of the print functions
  presented in this section. Call each of these functions to print i and j
  defined as follows:
  int i = 0, j[2] = {0, 1};
 */

#include <ctype.h>
#include <iostream>
using namespace std;

void print(const int &a) { cout << a << endl; }

void print(const int *a) { cout << *a << endl; }

void print(const int *a, size_t l) {
  for (size_t i = 0; i != l; ++i) {
    cout << a[i] << endl;
  }
}

void print(const int (&array)[2]) {
  for (const auto element : array) {
    cout << element << endl;
  }
}

int main() {
  int i = 0, j[2] = {0, 1};
  print(i);
  print(&i);

  print(j);

  print(j, end(j) - begin(j));

  return 0;
}
