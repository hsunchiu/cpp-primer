/*
 Exercise 10.37: Given a vector that has ten elements, copy the elements
 from positions 3 through 7 in reverse order to a list
 */

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::list<int> l(7 - 3 + 1);
  std::reverse_copy(vec.cbegin() + 3, vec.cbegin() + 8, l.begin());
  for (auto i : l)
    std::cout << i << " ";
  std::cout << std::endl;
}
