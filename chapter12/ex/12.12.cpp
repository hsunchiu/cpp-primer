#include <__errc>
#include <iostream>
#include <memory>

using namespace std;

// we just use the template for any type, just borrow the structure like rust.
// template <class T> shared_ptr<T> &process(shared_ptr<T> &sp) {
//   cout << sp.use_count() << endl;
//   return sp;
// }

shared_ptr<int> process(shared_ptr<int> sp) {
  cout << sp.use_count() << endl;
  return sp;
}

// template <> shared_ptr<int> &proccess(shared_ptr<int> &sp) {
//   cout << sp.use_count() << endl;
//   return sp;
// }

int main() {
  auto p = new int();           // the return type is a pionter to int type
  auto sp = make_shared<int>(); // empty shared pointer.

  // process(p);
  // process(new int(10));

  process(sp);
  // TODO: Why I can't converted the type when I use in the template
  process(shared_ptr<int>(new int(10)));
}
