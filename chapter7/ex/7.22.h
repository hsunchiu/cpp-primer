/*
  Exercise 7.22: Update your Person class to hide its implementation.
 */

#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>
#include <string>

struct Person {
  friend std::istream &read(std::istream &is, Person &person);
  friend std::ostream &print(std::ostream &os, const Person &person);

public:
  Person() = default;
  Person(const std::string sname, const std::string saddr)
      : name(sname), address(saddr) {}
  Person(std::istream &is) { read(is, *this); }

  std::string getName() const { return name; }
  std::string getAddress() const { return address; }

private:
  std::string name;
  std::string address;
};

inline std::istream &read(std::istream &is, Person &person) {
  is >> person.name >> person.address;
  return is;
}

inline std::ostream &print(std::ostream &os, const Person &person) {
  os << person.name << " " << person.address;
  return os;
}

#endif
