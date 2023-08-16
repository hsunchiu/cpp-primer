#include <vector>

class NoDefault {
public:
  NoDefault(int i) {}
};

class C {
public:
  C() : nodefault(0) {}

private:
  NoDefault nodefault;
};

int main() {
  C c;

  std::vector<C> vec(10);

  return 0;
}
