/*
 * Exercise 1.9: Write a program that uses a while to sum the numbers from
 * 50 to 100.
 */

#include <iostream>

int main() {
  int start = 50, end = 100, sum = 0;
  while (start <= end) {
    sum += start;
    ++start;
  }

  std::cout << "the sum from 50 to 100  inclusive is " << sum << std::endl;

  return 0;
}
