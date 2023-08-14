#include <iostream>
#include <vector>
using namespace std;

void print(vector<string> vs) {
  if (vs.size()) {
#ifndef NDEBUG
    cout << "the size of vector<string> vs: " << vs.size() << endl;
#endif
    auto tmp = *(vs.end() - 1);
    vs.pop_back();
    print(vs);
    cout << tmp << endl;
  }
}

int main() {
  vector<string> vs = {"hello", "world", "你", "好", "我", "的", "世", "界"};
  print(vs);

  return 0;
}
