// test the sequential of class 's ctor and dtor.
#include <iostream>

class Base {
public:
  Base(int n = 0) {
    std::cout << "call Base's ctor" << std::endl;
    // p = new int(n);
  }
  Base(Base &rhs) {
    std::cout << "call Base' copy ctor " << std::endl;
    // delete p;
    // p = rhs.p;
  }
  Base &operator=(Base &rhs) {
    std::cout << "call Base's copy assign ctor" << std::endl;
    // delete p;
    // p = rhs.p;
    return *this;
  }

  virtual ~Base() {
    std::cout << "call Base's dctor " << std::endl;
    // delete p;
  }

private:
  int *p;
};

class D1 : public Base {
public:
  D1(int n = 0) { std::cout << "call D1's ctor" << std::endl; }

  ~D1() { std::cout << "call D1's dtor" << std::endl; }

private:
  int *p;
};

int main() {
  //   Base a; Base b(a);

  //  D1 d1;

  Base *bp = new D1(10);

  delete bp;
}
