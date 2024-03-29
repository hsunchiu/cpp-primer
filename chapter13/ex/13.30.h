/*
  Exercise 13.30: Write and test a swap function for your valuelike version of
  HasPtr. Give your swap a print statement that notes when it is executed.
 */
#ifndef _EX13_30_H
#define _EX13_30_H
#include <iostream>
#include <string>

class HasPtr {
public:
  friend void swap(HasPtr &, HasPtr &);
  HasPtr(const std::string &s = std::string()) : ps(new std::string()), i(0) {}
  HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
  HasPtr &operator=(const HasPtr &hp) {
    auto new_p = new std::string(*hp.ps);
    delete ps;
    ps = new_p;
    i = hp.i;
    return *this;
  }

  ~HasPtr() { delete ps; }

  void show() { std::cout << *ps << std::endl; }

private:
  std::string *ps;
  int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(rhs.i, rhs.i);

  std::cout << "call swap(HasPtr&, HasPtr&)" << std::endl;
}

#endif
