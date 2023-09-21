#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

using namespace std;

template <typename T>

void print(vector<T> v) {
  cout << "vector<T> has " << v.size() << " elememts:" << endl;
  for (const auto &e : v) {
    cout << e << " ";
  }
  cout << endl;
}

int main() {

  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  // maybe can't macro
  print(v1);
  print(v2);
  print(v3);
  print(v4);
  print(v5);
  print(v6);
  print(v7);
}
