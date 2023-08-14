#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef int Func(int, int);

vector<Func *> funcs = {};

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

int division(int a, int b) { return a / b; }

int main() {
  funcs = {add, sub, mul, division};

  int a = 42, b = 2;

  for (auto f : funcs) {
    cout << f(a, b) << endl;
  }
}
