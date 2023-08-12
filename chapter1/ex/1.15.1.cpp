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
