#include <iostream>
using namespace std;

int main() {
  int i = 0;

  // compile time behaviour, warning
  sizeof(i++);

  cout << "sizeof(i++)  = " << i << endl;

  return 0;
}
