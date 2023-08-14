#include "Chapter6.h"
#include <iostream>

using namespace std;

int main() {
  for (auto i = 0; i < 10; ++i) {
    cout << "fact(" << i << ") = " << fact(i) << endl;
  }
}
