/*
  Exercise 11.32: Using the multimap from the previous exercise, write a
  program to print the list of authors and their works alphabetically.
 */

#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  multimap<string, string> works = {
      {"hsun", "the solution of cpp primer"},
      {"hsun", "one day I will create a os for embed system!"},
      {"hsun", "how to create a container from scratch"},
      {"noname", "others"}};

  map<string, multiset<string>> m;

  for (const auto &w : works) {
    m[w.first].insert(w.second);
  }

  for (const auto &e : m) {
    cout << e.first << ": ";
    for (const auto &work : e.second)
      cout << work << " ";
    cout << endl;
  }

  return 0;
}
