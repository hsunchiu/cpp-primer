#include <iostream>

class Base {

private:
  int a = 1;
  void Bf1(){};

protected:
  int b = 0;
  void Bf2(){};

public:
  int c = 0;
  void Bf3(){};
};

class PublicDerived : public Base {
public:
  void f1() {
    c; // we can access protected member
    b; // we can access publice member
    // a; // compile error. declared private member
    // Bf1(); // compile error. declared private member
    Bf2();
    Bf3();

    // float(a); // maybe a bad smell, is `a` float or convert the a to float,
    // in clang, declare variable a with float type.

    float(a); // declaration a a with float
    std::cout << float(a) << std::endl;

    // Base::Bf1();
    Base::Bf2();
    Base::Bf3();
  }
};

class ProtectedDerived : protected Base {
public:
  void f1() {
    c;
    b;
    // a;

    // Bf1();
    Bf2();
    Bf3();
  }
};

class PrivateDerived : private Base {
  void f1() {
    // a;
    b;
    c;

    // Bf1();
    Bf2();
    Bf3();
  }
};

int main() {
  PublicDerived a;
  a.f1();
}
