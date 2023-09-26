/*
  Exercise 8.10: Write a program to store each line from a file in a
  vector<string>. Now use an istringstream to read each element from
  the vector a word at a time.
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::istringstream;
using std::string;
using std::vector;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main() {
  string line, word;
  vector<PersonInfo> people;
  istringstream record;
  while (getline(cin, line)) {
    PersonInfo info;
    record.clear(); // clear the last record, for while loop, the record is
                    // global.
    record.str(line);
    record >> info.name;
    while (record >> word)
      info.phones.push_back(word);
    people.push_back(info);
  }

  for (auto &p : people) {
    std::cout << p.name << " ";
    for (auto &s : p.phones)
      std::cout << s << " ";
    std::cout << std::endl;
  }

  return 0;
}
