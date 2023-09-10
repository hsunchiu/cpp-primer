/*
  Rewrite the program on page 481 using an allocator
 */

#include <iostream>
#include <memory>

using namespace std;

int main() {
  allocator<string> alloc;

  // 100 strings
  size_t n = 100;
  auto p = alloc.allocate(n);
  string s;

  auto q = p;

  // contruct
  while (cin >> s && q != p + n) {
    alloc.construct(q++, s);
  }

  cout << *p << endl;

  // destory
  while (q != p) {
    alloc.destroy(--q);
  }
}
