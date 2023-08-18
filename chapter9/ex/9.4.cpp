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
