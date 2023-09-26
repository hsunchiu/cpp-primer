/*
  Exercise 9.5: Rewrite the previous program to return an iterator to the
  requested element. Note that the program must handle the case where the
  element is not found.
 */

#include <vector>
using namespace std;

vector<int>::iterator find(vector<int>::iterator beg, vector<int>::iterator end,
                           int value) {
  for (auto iter = beg; iter != end; ++iter)
    if (*iter == value)
      return iter;
  return end;
}
