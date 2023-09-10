#include <iostream>

struct numbered {

  int mysn;
};

using namespace std;

void f(numbered s) { cout << s.mysn << endl; }

int main() {
  numbered a, b = a, c = b;

  f(a);
  f(b);
  f(c);
}
