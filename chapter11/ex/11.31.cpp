/*
  Exercise 11.31: Write a program that defines a multimap of authors and
  their works. Use find to find an element in the multimap and erase that
  element. Be sure your program works correctly if the element you look for is
  not in the map.
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  multimap<string, string> works = {
      {"hsun", "the solution of cpp primer"},
      {"hsun", "one day I will create a os for embed system!"},
      {"hsun", "how to create a container from scratch"},
      {"noname", "others"}};

  // find and output the result, I try to use `equal_range`
  for (auto pos = works.equal_range("hsun"); pos.first != pos.second;
       ++pos.first) {
    cout << pos.first->second << endl;
  }

  // erase noname authurs, but their work is indelible.
  // I leave no trace of wings in the air,but I am.
  auto n = works.erase("noname");

  for (auto e : works) {
    cout << e.first << " - " << e.second << endl;
  }

  return 0;
}
