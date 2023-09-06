/*
  Exercise 12.24: Write a program that reads a string from the standard input
  into a dynamically allocated character array. Describe how your program
  handles varying size inputs. Test your program by giving it a string of data
  that is longer than the array size you’ve allocated
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  char *p = new char[100];
  size_t i = 0;
  string s;

  while (cin >> s) {
    s.copy(p, s.size() - 1 + i);
    ++i;
  }

  p[99] = '\0';

  for (size_t i = 0; p[i] != '\0'; i++) {
    cout << p[i];
  }

  delete[] p;

  return 0;
}
