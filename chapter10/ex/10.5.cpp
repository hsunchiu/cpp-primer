/*
  Exercise 10.5: In the call to equal on rosters, what would happen if both
  rosters held C-style strings, rather than library strings?
 */

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  const char *s1[] = {"hello", "world"};
  const char *s2[] = {"hello", "world", "ni", "hao"};

  cout << (equal(cbegin(s1), cend(s1), cbegin(s2)) ? "true" : "false");
}
