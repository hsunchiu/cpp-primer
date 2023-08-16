#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person {
private:
  std::string __name;
  std::string __address;

public:
  Person() = default;
  void name(const std::string name) { __name = name; }
  void address(const std::string address) { __address = address; }

  std::string name() const { return __name; }
  std::string address() const { return __address; }
};

#endif
