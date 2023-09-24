/*
  Exercise 6.26: Write a program that accepts the options presented in this
  section. Print the values of the arguments passed to main.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  for (auto i = 0; i < argc; ++i)
    cout << "argv[" << i << "] = " << argv[i] << endl;

  return 0;
}
