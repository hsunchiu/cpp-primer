/*
 * Exercise 1.16: Write your own version of a program that prints the sum of
 * a set of integers read from cin.
 */
#include <iostream>

int main() {
  std::cout << "Enter the numbers and we will get the sum of them:"
            << std::endl;
  int val = 0, sum = 0;
  while (std::cin >> val)
    sum += val;

  std::cout << "the sum of them is " << sum << std::endl;

  return 0;
}
