/*
  Exercise 3.44: Rewrite the programs from the previous exercises using a
  type alias for the type of the loop control variables.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  // a range for to manage the interation
  using int_array = int[4];
  for (int_array &p : ia) {
    for (int &q : p) {
      cout << q << " ";
    }
  }
  cout << endl;

  // ordinary for loop using subscripts
  for (size_t i = 0; i != 3; ++i)
    for (size_t j = 0; j != 4; ++j)
      cout << ia[i][j] << " ";
  cout << endl;

  // using pointer
  // use type alias
  for (int_array *p = ia; p != ia + 3; ++p)
    for (int *q = *p; q != *p + 4; ++q)
      cout << *q << " ";
  cout << endl;

  return 0;
}
