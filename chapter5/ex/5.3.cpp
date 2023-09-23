/*
  Exercise 5.3: Use the comma operator (§ 4.10, p. 157) to rewrite the while
  loop from § 1.4.1 (p. 11) so that it no longer requires a block. Explain
  whether this rewrite improves or diminishes the readability of this code.
 */

/* Answer:
   I think block is more readable.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  int sum = 0, val = 1;

  while (val <= 10)
    sum += val, val++;

  cout << "the sum of 1 to 10 inclusive 10 is " << sum << endl;

  return 0;
}
