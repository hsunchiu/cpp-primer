/*
  Exercise 7.19: Indicate which members of your Person class you would declare
  as public and which you would declare as private. Explain your choice.
 */

#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person {
private:
  // encapsulation
  std::string __name;
  std::string __address;

public:
  // interface
  Person() = default;
  void name(const std::string name) { __name = name; }
  void address(const std::string address) { __address = address; }

  std::string name() const { return __name; }
  std::string address() const { return __address; }
};

#endif
