/*
  Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p.
  228) that used recursion to print the contents of a vector to conditionally
  print information about its execution. For example, you might print the size
  of the vector on each call. Compile and run the program with debugging turned
  on and again with it turned off.
 */

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
