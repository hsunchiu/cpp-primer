/*
  Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive,
  into three other containers. Use an inserter, a back_inserter, and a
  front_inserter, respectivly to add elements to these containers. Predict how
  the output sequence varies by the kind of inserter and verify your predictions
  by running your programs.
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

template <typename T>

void print(T &v) {
  for (const auto &i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  list<int> v1;
  vector<int> v2;
  vector<int> v3;

  copy(v.cbegin(), v.cend(), front_inserter(v1));
  print(v1);

  copy(v.cbegin(), v.cend(), back_inserter(v2));
  print(v2);

  copy(v.cbegin(), v.cend(), inserter(v3, v3.begin()));

  print(v3);
}
