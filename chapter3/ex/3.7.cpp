#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string str;
  while (getline(cin, str)) {
    for (char c : str) { // will not change str

      c = 'X';
    }
    cout << str << endl;
  }

  return 0;
}
