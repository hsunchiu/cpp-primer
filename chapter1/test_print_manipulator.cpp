#include <iostream>

int main() {
  std::cout << "the " << __LINE__ << " has manipulator std::endl" << std::endl;

  std::cout << "the " << __LINE__ << " has no manipulator std::endl";

  throw;

  return 0;
}
