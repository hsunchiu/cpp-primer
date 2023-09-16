/*
  Exercise 15.23: Assuming class D1 on page 620 had intended to override
  its inherited fcn function, how would you fix that class? Assuming you fixed
  the class so that fcn matched the definition in Base, how would the calls in
  that section be resolved?
 */

#include <iostream>

class Base {
public:
  virtual int fcn() {
    std::cout << "call `int Base::fcn()`" << std::endl;
    return 0;
  }
};

class D1 : public Base {
public:
  int fcn(int) {
    std::cout << "call `int D1:fcn(int)`" << std::endl;
    return 0;
  }

  virtual int fcn() override {
    std::cout << "call `int D1::fcn()`" << std::endl;
    return 0;
  }

  virtual void f2() {
    std::cout << "call `void D1:f2()`" << std::endl;
    return;
  };
};

class D2 : public D1 {
public:
  int fcn(int) {
    std::cout << "call `int D2::fcn(int)`" << std::endl;
    return 0;
  }
  int fcn() {
    std::cout << "call `int D2::fcn()`" << std::endl;
    return 0;
  }

  void f2() {
    std::cout << "call `D2::f2()`" << std::endl;
    return;
  };
};

class D3 : public Base {};

int main() {

  Base *pb = nullptr;
  D1 d1;
  D2 d2;
  D3 d3;

  d1.fcn();  // static check in compile time.
  d1.fcn(1); // static check in compile time.

  pb = &d1;

  pb->fcn(); // use vtptr to implement the dymatic binding.

  pb = &d2;

  pb->fcn();

  pb = &d3;

  pb->fcn(); // dymatic binding, but using the Base::func()
}
