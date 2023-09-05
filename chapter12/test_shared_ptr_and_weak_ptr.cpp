/*
  test the shared_ptr and weak_ptr, check the number of the reference.
 */

#include <iostream>
#include <memory>

using namespace std;

template <class T> ostream &print(ostream &os, weak_ptr<T> wp) {

  os << typeid(wp).name() << " has reference count " << wp.use_count() << endl;

  return os;
}

template <typename T> ostream &print(ostream &os, shared_ptr<T> sp) {
  os << typeid(sp).name() << " has reference cout " << sp.use_count() << endl;
  return os;
}

int main() {

  shared_ptr<int> sp = make_shared<int>(42);

  print(cout, sp);
  print(cout, weak_ptr<int>(sp));
}
