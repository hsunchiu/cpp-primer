/*
 * Exercise 1.15: Write programs that contain the common errors discussed in
 * the box on page 16. Familiarize yourself with the messages the compiler
 * generates.
 */

#include <iostream>

// syntax error
int main() {

  // expect `;` not `:`
  std::cout << "Read each file"
            << std::endl :

      // need "" for the string `Update Master`
      std::count
            << Update Master.
            << std::endl;

  std::cout << "Write new master." << std::endl;

  // leak the `;`
  return 0
}
