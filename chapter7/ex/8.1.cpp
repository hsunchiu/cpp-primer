#include <iostream>
#include <string>
using namespace std;

istream &func(istream &is) {
  string buf;
  while (is >> buf)
    cout << buf << endl;

  is.clear();

  return is;
}

int main() {
  auto &is = func(cin);

  cout << is.rdstate() << endl;
  return 0;
}
