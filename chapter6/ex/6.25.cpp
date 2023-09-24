/*
  Exercise 6.25: Write a main function that takes two arguments.
  Concatenate the supplied arguments and print the resulting string.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  if (argc != 3) { // intclude the default arg the proc's name
    cout << "Please enter 2 options" << endl;
    return -1;
  }

  string s = string(argv[1]) + string(argv[2]);

  cout << s << endl;

  return 0;
}
