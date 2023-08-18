#include <vector>
using namespace std;

vector<int>::iterator find(vector<int>::iterator beg, vector<int>::iterator end,
                           int value) {
  for (auto iter = beg; iter != end; ++iter)
    if (*iter == value)
      return iter;
  return end;
}
