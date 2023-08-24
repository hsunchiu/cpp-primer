/*
  Exercise 10.7: Determine if there are any errors in the following programs
  and, if so, correct the error(s):
  (a)C++ Primer, Fifth Edition
  Click here to view code image
  vector<int> vec; list<int> lst; int i;
  while (cin >> i)
       lst.push_back(i);
  copy(lst.cbegin(), lst.cend(), vec.begin());
  (b)
  vector<int> vec;
  vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
  fill_n(vec.begin(), 10, 0);
 */
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

void test_a() {
  vector<int> vec;
  list<int> lst;
  int i;
  while (cin >> i)
    lst.push_back(i);
  // wrong, please add the vec.size()
  vec.reserve(lst.size());
  copy(lst.cbegin(), lst.cend(), vec.begin());
}

void test_b() {
  vector<int> vec;
  vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
  fill_n(vec.begin(), 10, 0);
}
