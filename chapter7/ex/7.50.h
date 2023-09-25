/*
  Exercise 7.50: Determine whether any of your Person class constructors
  should be explicit.
 */

#ifndef PERSON_H
#define PERSON_H

#include <istream>
#include <ostream>
#include <string>
class Person {

  friend std::istream &read(std::istream &is, Person &person);
  friend std::ostream &print(std::ostream &os, Person &person);

public:
  void name(std::string n) { _name = n; }

  void address(std::string a) { _address = a; }

  std::string name() const { return _name; }

  std::string address() const { return _address; }

public:
  Person() = default;

  Person(std::string n, std::string a) : _name(n), _address(a) {}

  explicit Person(std::istream &is) { read(is, *this); }

private:
  std::string _name;
  std::string _address;
};

inline std::istream &read(std::istream &is, Person &person) {
  is >> person._name >> person._address;
  return is;
}

inline std::ostream &print(std::ostream &os, Person &person) {
  os << person._name << " " << person._address;
  return os;
}

#endif
