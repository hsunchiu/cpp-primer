#include <iostream>

struct Y {
  Y() {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call default ctor" << std::endl;
  }

  Y(const Y &) {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call copy ctor" << std::endl;
  }

  Y &operator=(const Y &rhs) {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call copy-assignment operator" << std::endl;
    return *this;
  }

  ~Y() {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call dtor" << std::endl;
  }
};

struct X {
  X() {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call default ctor" << std::endl;
  }

  X(const X &) {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call copy ctor" << std::endl;
  }

  X &operator=(const X &rhs) {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call copy-assignment operator" << std::endl;
    return *this;
  }

  ~X() {
    std::cout << (std::string) typeid(this).name();
    std::cout << " call dtor" << std::endl;
  }

  Y y;
};

void seporator() { std::cout << std::string(60, '-') << std::endl; }

int main() {
  X a;
  seporator();
  X b = a;
  seporator();
  X c;
  c = b;

  seporator();

  X *d = new X();

  seporator();

  delete d;

  seporator();
}
