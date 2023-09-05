/*
  Exercise 12.23: Write a program to concatenate two string literals, putting
  the result in a dynamically allocated array of char. Write a program to
  concatenate two library strings that have the same value as the literals
  used in the first program.
 */

#include <cstring>
#include <iostream>

using namespace std;

int main() {
  // same literals
  char s1[] = "hello world";
  char s2[] = "hello world";

  cout << "sizeof(s1): " << sizeof(s1) << "sizeof(s2): " << sizeof(s2) << endl;

  // trim the duplicate '\0'
  char *p = new char[sizeof(s1) + sizeof(s2) - 1];

  memcpy(p, s1, sizeof(s1) - 1);
  memcpy(&p[sizeof(s1) - 1], s2, sizeof(s2));

  for (size_t i = 0; i != sizeof(s1) + sizeof(s2); ++i) {
    cout << p[i];
  }

  cout << endl;
}
