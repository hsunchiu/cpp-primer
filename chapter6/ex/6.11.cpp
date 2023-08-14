#include <cmath>
#include <iostream>
using namespace std;

void reset(int &x) { x = 0; }

int main() {
  int x = 100;
  cout << "reset(" << x << ") = ";
  reset(x);
  cout << x << endl;
}
