#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
  string word;
  list<string> lst;
  auto iter = lst.begin();
  while (cin >> word) {
    iter = lst.insert(iter, word);
  }

  for (auto s : lst) {
    cout << s << endl;
  }
}
