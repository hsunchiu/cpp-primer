#include <iostream>
#include <ostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s1, s2;
  cout << "Compare two stirng and return the bigger one." << endl;
  cin >> s1 >> s2;

  // compare the string
  cout << "compare the string" << endl;
  if (s1 >= s2)
    cout << s1 << endl;
  else
    cout << s2 << endl;

  cout << "compare the string's length" << endl;
  if (s1.size() >= s2.size())
    cout << s1 << endl;
  else
    cout << s2 << endl;

  return 0;
}
