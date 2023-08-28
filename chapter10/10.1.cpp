/*
 Exercise 10.1: The algorithm header defines a function named count that, like
 find, takes a pair of iterators and a value. count returns a count of how often
 that value appears. Read a sequence of ints into a vector and print the count
 of how many elements have a given value.
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int v;
  vector<int> iv;
  cout << "Please enter smoe integers" << endl;

  while (cin >> v) {
    iv.push_back(v);
  }

  cout << "Please enter an integer you want to find" << endl;

  cout << "the int vector has " << count(iv.begin(), iv.end(), v) << "elements";
}
