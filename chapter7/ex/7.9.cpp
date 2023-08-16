#include "7.4.h"
#include <iostream>
#include <ostream>

int main() {
  Person person;

  person.name = "hsun";
  person.address = "China";

  std::cout << person.name << "'s address is " << person.address << std::endl;
}
