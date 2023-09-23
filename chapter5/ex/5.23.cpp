/*
  Exercise 5.23: Write a program that reads two integers from the standard input
  and prints the result of dividing the first number by the second.
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  int ival1, ival2;
  cin >> ival1 >> ival2;
  cout << ival1 / ival2 << endl;

  return 0;
}
