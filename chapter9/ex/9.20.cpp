/*
  Exercise 9.20: Write a program to copy elements from a list<int> into
  two deques. The even-valued elements should go into one deque and the
  odd ones into the other.
 */
#include <deque>
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> il;

  for (size_t i = 0; i != 100; i++) {
    il.push_back(i);
  }

  deque<int> od; // odd number
  deque<int> ed; // even number

  for (const auto i : il) {
    if (i % 2) {
      od.push_back(i);
    } else {
      ed.push_back(i);
    }
  }

  cout << "the elements in odd deque is" << endl;

  for (const auto i : od) {
    cout << i << " ";
  }
  cout << endl;

  cout << "the element in even deque is" << endl;
  for (const auto i : ed) {
    cout << i << " ";
  }

  cout << endl;
}
