#include <iostream>

using namespace std;

struct numbered {

  numbered() = default;

  numbered(const numbered &lhs) {
    cout << "numbered(const numbered&)" << endl;
    mysn = lhs.mysn + 1; // try to simulate the serial number, have no
                         // consideration of the  flow situation.
  }

  int mysn;
};

void f(numbered s) { cout << s.mysn << endl; }

int main() {
  numbered a, b = a, c = b;

  cout << a.mysn << endl;
  cout << b.mysn << endl;
  cout << c.mysn << endl;

  f(a);
  f(b);
  f(c);
}
