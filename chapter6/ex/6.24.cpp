/*
  Exercise 6.24: Explain the behavior of the following function. If there are
  problems in the code, explain what they are and how you might fix them.
  void print(const int ia[10])
  {
    for (size_t i = 0; i != 10; ++i) cout << ia[i] << endl;
  }
 */

#include <ctype.h>
#include <iostream>
using namespace std;

// type erase will occur when call `void print(const int ia[10])`
// if ia 's length < 10, out of the array bound
// void print(const int ia[10]) {
//   for (size_t i = 0; i != 10; ++i) {
//     cout << ia[i] << endl;
//   }
// }

void print(const int (&ia)[10]) {
  for (size_t i = 0; i != 10; ++i) {
    cout << ia[i] << endl;
  }
}
