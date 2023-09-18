/*
 * Exercise 2.8: Using escape sequences, write a program to print 2M followed
 * by a newline. Modify the program to print 2, then a tab, then an M, followed
 * by a newline.
 */
#include <iostream>

int main() {
  std::cout << '\062' << '\115' << '\012';
  std::cout << '\x32' << '\x9' << '\x4d' << '\xa';

  std::cout << "Just for test the 0x7C with a C" << std::endl;
  //  std::cout << "\x7CC" << std::endl;  out of the scope of the escape
  //  sequence
  std::cout << "\x7C\xC" << std::endl;
  std::cout << "\x7C C" << std::endl;

  return 0;
}
