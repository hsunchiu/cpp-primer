/*
  Exercise 13.31: Give your class a < operator and define a vector of
  HasPtrs. Give that vector some elements and then sort the vector.

  Note when swap is called.
 */
#ifndef _EX13_31_H
#define _EX13_31_H
#include <iostream>
#include <string>

class HasPtr {
public:
  friend void swap(HasPtr &, HasPtr &);
  friend bool operator<(HasPtr &lhs, HasPtr &rhs);
  HasPtr(const std::string &s = std::string()) : ps(new std::string()), i(0) {}
  HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
  HasPtr &operator=(const HasPtr &hp) {
    auto new_p = new std::string(*hp.ps);
    delete ps;
    ps = new_p;
    i = hp.i;
    return *this;
  }

  bool operator<(const HasPtr &hp) { return *ps < *hp.ps; }

  ~HasPtr() { delete ps; }

  void show() const { std::cout << *ps << std::endl; }

private:
  std::string *ps;
  int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);

  std::cout << "call swap(HasPtr&, HasPtr&)" << std::endl;
}

inline bool operator<(HasPtr &lhs, HasPtr &rhs) { return *lhs.ps < *rhs.ps; }

#endif
