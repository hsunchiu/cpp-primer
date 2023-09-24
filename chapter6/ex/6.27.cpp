/*
  Exercise 6.27: Write a function that takes an initializer_list<int>
  and produces the sum of the elements in the list.
 */

#include <initializer_list>
#include <iostream>
using namespace std;
int sum(initializer_list<int> lst) {
  int sum = 0;
  for (auto beg = lst.begin(); beg != lst.end(); beg++) {
    sum += *beg;
  }

  return sum;
}

int main() {
  initializer_list<int> lst = {1, 2, 3, 4, 5, 6};
  cout << sum(lst) << endl;

  return 0;
}
