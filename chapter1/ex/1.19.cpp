/*
 * Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
 * 13) that printed a range of numbers so that it handles input in which the
 * first number is smaller than the second.
 */

#include <iostream>

int main() {
  std::cout << "Enter two integers and list the numbers between them"
            << std::endl;

  int small = 0, big = 0;

  std::cin >> small >> big;

  if (small > big) {
    int tmp = small;
    small = big;
    big = tmp;
  }

  for (int i = small; i <= big; i++) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
