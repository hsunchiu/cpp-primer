/*
 * Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
 */

#include <iostream>

int main() {
  int sum = 0;

  for (int i = 50; i <= 100; i++)
    sum += i;

  std::cout << "the sum is " << sum << std::endl;

  return 0;
}
