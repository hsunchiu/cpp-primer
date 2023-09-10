/*
  Exercise 13.18: Define an Employee class that contains an employee name
  and a unique employee identifier. Give the class a default constructor and a
  constructor that takes a string representing the employee’s name. Each
  constructor should generate a unique ID by incrementing a static data
  member.
 */
#include <iostream>

struct Employee {
  Employee() = default;
  Employee(const std::string &name) : _name(name) { id = _SID + 1; }

  std::string _name;

  int id = 0;

  static int _SID;
};
