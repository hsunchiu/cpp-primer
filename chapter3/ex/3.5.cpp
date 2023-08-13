#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string in, s;
  while (cin >> in) {
    s = s + in + ' ';
  }

  cout << s << endl;

  return 0;
}
