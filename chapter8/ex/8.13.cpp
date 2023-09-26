/*
  Exercise 8.13: Rewrite the phone number program from this section to read
  from a named file rather than from cin.
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>
struct PersonInfo {
  std::string name;
  std::vector<std::string> phones;
};

int main(int argc, char **argv) {
  if (2 != argc) {
    std::cout << "Please enter a file name!" << std::endl;
    return EXIT_FAILURE;
  }

  std::string line, word;
  std::vector<PersonInfo> people;
  std::ifstream ifs(argv[2]);

  if (ifs) {
    while (getline(ifs, line)) {
      PersonInfo info;
      std::istringstream record(line);

      record >> info.name;

      while (record >> word) {
        info.phones.push_back(word);
      }
      people.push_back(info);
    }
  } else {
    std::cout << "Can't open file: " << argv[2] << std::endl;
  }

  return EXIT_SUCCESS;
}
