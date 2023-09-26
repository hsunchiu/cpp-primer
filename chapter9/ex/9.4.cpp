/*
  Exercise 9.4: Write a function that takes a pair of iterators to a
  vector<int> and an int value. Look for that value in the range and return
  a bool indicating whether it was found.
 */

#include <vector>
bool find(std::vector<int>::const_iterator beg,
          std::vector<int>::const_iterator end, int item) {
  while (beg != end) {
    if (*beg == item)
      return true;
    ++beg;
  }

  return false;
}
