#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool hasUpper(const string &s) {
  for (auto c : s)
    if (isupper(c))
      return true;
  return false;
}

int main() {
  vector<string> vs;
  string s;

  while (cin >> s) {
    vs.push_back(s);
  }

  for (auto s : vs) {
    cout << s << " has "
         << "upper:" << (hasUpper(s) ? "true" : "false") << endl;
  }

  return 0;
}
