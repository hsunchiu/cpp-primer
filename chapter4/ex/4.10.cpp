/*
  Exercise 4.10: Write the condition for a while loop that would read ints from
  the standard input and stop when the value read is equal to 42.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  int i;
  while (cin >> i && i != 42) {
    cout << i << " ";
  }

  cout << endl;
  cout << i << endl;
  cout << endl;
  return 0;
}
