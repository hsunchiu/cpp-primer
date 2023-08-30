/*
  Exercise 11.10: Could we define a map from vector<int>::iterator to int? What
  about from list<int>::iterator to int? In each case, if not, why not?
 */
#include <list>
#include <map>
#include <vector>

using namespace std;

int main() {
  // define a map from vector<int>::iterator to int
  map<vector<int>::iterator, int> m1;

  // define a map from list<int>::iterator to int
  map<list<int>::iterator, int> m2;
}
