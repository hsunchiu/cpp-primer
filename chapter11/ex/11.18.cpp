/*
  Exercise 11.18: Write the type of map_it from the loop on page 430
  without using auto or decltype.
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string, size_t> word_cout;
  map<string, size_t>::const_iterator map_it = word_cout.cbegin();

  while (map_it != word_cout.cend()) {
    cout << map_it->first << "occurs" << map_it->second << "time(s)" << endl;
    ++map_it;
  }
}
