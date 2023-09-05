/*
  Exercise 12.17: Which of the following unique_ptr declarations are illegal
  or likely to result in subsequent program error? Explain what the problem is
  with each one.
  int ix = 1024, *pi = &ix, *pi2 = new int(2048);
  typedef unique_ptr<int> IntP;
  (a) IntP p0(ix);
  (b) IntP p1(pi);
  (c) IntP p2(pi2);
  (d) IntP p3(&ix);
  (e) IntP p4(new int(2048));
  (f) IntP p5(p2.get())
 */

#include <memory>

using namespace std;

int main() {

  int ix = 1024, *pi = &ix, *pi2 = new int(2048);
  typedef unique_ptr<int> IntP;
  IntP p0(ix);
  IntP p1(pi);
  IntP p2(pi2);
  IntP p3(&ix);
  IntP p4(new int(2048));
  IntP p5(p2.get());
}
