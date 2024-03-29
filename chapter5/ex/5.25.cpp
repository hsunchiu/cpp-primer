/*
  Exercise 5.25: Revise your program from the previous exercise to use a try
  block to catch the exception. The catch clause should print a message to the
  user and ask them to supply a new number and repeat the code inside the try.
 */

#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main(int argc, char **argv) {
  int a, b;
  cout << "Please enter two integers: ";
  while (cin >> a >> b) {
    try {
      if (b == 0)
        throw runtime_error("divisor is 0!");
      cout << static_cast<double>(a) / b << endl;
      cout << "Please enter two integers: ";
    } catch (runtime_error err) {
      cout << err.what();
      cout << "\nTry Again? Enter y or n:" << endl;
      char c;
      cin >> c;
      if (!cin || c == 'n')
        break;
    }
  }

  return 0;
}
