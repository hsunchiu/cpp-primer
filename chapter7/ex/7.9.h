/*
  Exercise 7.9: Add operations to read and print Person objects to the code
  you wrote for the exercises in § 7.1.2 (p. 260).
 */
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <istream>
#include <ostream>
#include <string>

struct Person {
  std::string name;
  std::string address;
};

std::istream &read(std::istream &is, Person &person);
std::ostream &print(std::ostream &is, const Person &person);

#endif
