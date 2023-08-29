/*
  Check my answer to 10.41 exercise.
 */
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

using namespace std;

template <typename T>

ostream &print(ostream &os, T &c) {
  for (const auto e : c) {
    os << e << " ";
  }
  os << endl;

  return os;
}

int main() {
  vector<int> vec = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};

  print(cout, vec);

  replace(vec.begin(), vec.end(), 6, 5);
  print(cout, vec);

  ostream_iterator<int> os_iter(cout, " ");

  replace_if(
      vec.begin(), vec.end(), [](int v) { return v == 5; }, 6);

  print(cout, vec);

  cout << "dest is:" << endl;
  replace_copy(vec.begin(), vec.end(), os_iter, 6, 5);
  cout << endl;

  cout << "vec is:" << endl;
  print(cout, vec);

  cout << "dest is:" << endl;
  replace_copy_if(
      vec.begin(), vec.end(), os_iter, [](int n) { return n == 6; }, 10);
  cout << endl;
  cout << "vec is:" << endl;
  print(cout, vec);

  return 0;
}
