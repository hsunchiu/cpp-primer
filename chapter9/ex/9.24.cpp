/*
  Exercise 9.24: Write a program that fetches the first element in a vector
  using at, the subscript operator, front, and begin. Test your program on
  an empty vector.
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> iv; // = {1, 2, 3, 4, 5};

  // if (iv.empty()) {
  //   cout << iv.at(0) << endl;
  //   cout << iv[0] << endl;
  //   cout << iv.front() << endl;
  //   cout << *(iv.begin()) << endl;
  // }

  cout << iv.at(0) << endl;
  cout << iv[0] << endl;
  cout << iv.front() << endl;
  cout << *(iv.begin()) << endl;
}
