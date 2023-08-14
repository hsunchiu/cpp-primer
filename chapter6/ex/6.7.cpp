#include <iostream>
using namespace std;

int call() {
  static int count = 0;

  return count++ > 0 ? 1 : 0;
}

int main() {

  for (auto i = 1; i < 10; i++) {
    cout << "the " << i << "'s call() = " << call() << endl;
  }

  return 0;
}
