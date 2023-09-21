/*
 * Exercise 3.14: Write a program to read a sequence of ints from cin and
 * store those values in a vector.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> v1;
  cout << "the v1 elements are " << endl;
  for (decltype(v1.size()) i = 0; i < v1.size(); i++) {
    cout << v1[i] << ' ';
  }
  cout << endl;

  vector<int> v2(10);
  cout << "the v2 elements are " << endl;
  for (auto i : v2) {
    cout << i << ' ';
  }
  cout << endl;

  vector<int> v3(10, 42);
  cout << "the v3 elements are " << endl;
  for (auto i : v3) {
    cout << i << ' ';
  }
  cout << endl;

  vector<int> v4{10};
  cout << "the v4 elements are " << endl;
  for (auto i : v4) {
    cout << i << ' ';
  }
  cout << endl;

  vector<int> v5{10, 42};
  cout << "the v5 elements are " << endl;
  for (auto i : v5) {
    cout << i << ' ';
  }
  cout << endl;

  vector<string> v6{10};
  cout << "the v6 elements are " << endl;
  for (auto c : v6) {
    cout << c << ' ';
  }
  cout << endl;

  vector<string> v7{10, "hi"};
  cout << "the v7 elements are " << endl;
  for (auto c : v7) {
    cout << c << ' ';
  }
  cout << endl;

  return 0;
}
