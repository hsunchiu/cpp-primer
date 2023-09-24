/*
  Exercise 7.9: Add operations to read and print Person objects to the code
  you wrote for the exercises in § 7.1.2 (p. 260).
*/
#include "7.9.h"
#include <iostream>
#include <istream>
#include <ostream>

std::istream &read(std::istream &is, Person &person) {
  is >> person.name >> person.address;
  return is;
}

std::ostream &read(std::ostream &os, const Person &person) {
  os << person.name << " " << person.address;
  return os;
}
