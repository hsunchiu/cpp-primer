#include <ctype.h>
#include <iostream>
using namespace std;

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
