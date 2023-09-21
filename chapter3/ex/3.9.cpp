/*
 *  Exercise 3.9: What does the following program do? Is it valid? If not, why
 * not?
 * string s;
 * cout << s[0] << endl;
 */

#include <iostream>
#include <string>

int main() {
  std::string
      str; // empty string, the first char is '\0', legal, but it is not safe.

  std::cout << str[0] << std::endl;

  return 0;
}
