/*
  Exercise 5.24: Revise your program to throw an exception if the second number
  is zero. Test your program with a zero input to see what happens on your
  system if you don’t catch an exception.
 */

/*
> ./ex5_24
10 0
Floating point exception: 8
(for clang)
*/

#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main(int argc, char **argv) {
  int ival1, ival2;
  cin >> ival1 >> ival2;

  if (ival2 == 0)
    throw runtime_error("divisor is 0!");

  std::cout << static_cast<double>(ival1) / ival2 << std::endl;

  return 0;
}

/*
> ./ex5_24
10 0

libc++abi.dylib: terminating with uncaught exception of type std::runtime_error:
divisor is 0! Abort trap: 6


(for clang)
*/
