/*
  Exercise 13.22: Assume that we want HasPtr to behave like a value. That
  is, each object should have its own copy of the string to which the objects
  point. We’ll show the definitions of the copy-control members in the next
  section. However, you already know everything you need to know to
  implement these members. Write the HasPtr copy constructor and copy-
  assignment operator before reading on.
 */
#include <iostream>

struct HasPtr {
  HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), n(0) {}

  // copy initialization for the class
  HasPtr(const HasPtr &rhs) {

    // allocate dymatic memory for the string
    ps = new std::string(*rhs.ps);
    n = rhs.n;
  };

  // copy assignment
  HasPtr &operator=(const HasPtr &rhs) {
    auto newp = new std::string(*rhs.ps); // copy the underlying string
    delete ps;                            // free the old memory
    ps = newp;
    n = rhs.n; // copy data for rhs into this object

    return *this;
  }

  // destructor
  ~HasPtr() { delete ps; }

  int n;
  std::string *ps;
};
