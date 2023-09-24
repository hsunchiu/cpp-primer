/*
  Exercise 7.15: Add appropriate constructors to your Person class.
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>
struct Person {
  std::string name;

  std::string address;

  Person(std::string name = "", std::string address = "")
      : name(name), address(address) {}
};

#endif
