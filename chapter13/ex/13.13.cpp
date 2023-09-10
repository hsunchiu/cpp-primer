/*
  Exercise 13.13: A good way to understand copy-control members and
  constructors is to define a simple class with these members in which each
  member prints its name:
  struct X {
      X() {std::cout << "X()" << std::endl;}
      X(const X&) {std::cout << "X(const X&)" << std::endl;}
      };

  Add the copy-assignment operator and destructor to X and write a program using
  X objects in various ways: Pass them as nonreference and reference parameters;
  dynamically allocate them; put them in containers; and so forth. Study the
  output until you are certain you understand when and why each copy-control
  member is used. As you read the output, remember that the compiler can omit
  calls to the copy constructor.

 */

#include <iostream>

struct X {
  X() { std::cout << "X()" << std::endl; }
  X(const X &) { std::cout << "X(const X&)" << std::endl; }
  X &operator=(const X &lhs) {
    std::cout << "X& operator=(const X&)" << std::endl;
    return *this;
  }
  ~X() { std::cout << "~X()" << std::endl; }
};

int main() {
  X a;
  X b;

  X c(a);

  // Why can't call the copy-assignment operator
  X d = b;
}
