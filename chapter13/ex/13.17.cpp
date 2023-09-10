/*
  Exercise 13.17: Write versions of numbered and f corresponding to the
  previous three exercises and check whether you correctly predicted the
  output.
 */

// https://stackoverflow.com/questions/29154814/when-is-the-copy-assignment-operator-called
#include <iostream>

using namespace std;

class numbered {
public:
  typedef int SN;

  numbered() = default;
  numbered(const numbered &lhs) {
#ifndef NDEBUG
    std::cout << "numbered(const numbered &)" << std::endl;
#endif
    mysn = lhs.mysn + 1;
  }

  numbered &operator=(const numbered &lhs) {
#ifndef NDEBUG
    std::cout << "numbered &operater=(const numbered&)" << std::endl;
#endif
    mysn = lhs.mysn;
    return *this;
  }

  SN sn() const { return mysn; }

private:
  SN mysn;
};

void f(const numbered &s) { std::cout << s.sn() << std::endl; }

int main() {
  numbered a, b = a, c = b; // initialization, not an assignment.
  f(a);
  f(b);
  f(c);

  numbered d;

  d = c; // assignment.

  f(d);
}
