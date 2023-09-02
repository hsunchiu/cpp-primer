/*
  Exercise 12.10: Explain whether the following call to the process function
  defined on page 464 is correct. If not, how would you correct the call?
  Click here to view code image
  shared_ptr<int> p(new int(42));
  process(shared_ptr<int>(p));
 */

#include <iostream>
#include <memory>

using namespace std;

shared_ptr<int> process(shared_ptr<int> p) {

  cout << p.use_count() << endl;

  return p;
}

int main() {

  shared_ptr<int> p(new int(42));
  process(p);

  cout << p.use_count() << endl;
}
