/*
  Exercise 8.10: Write a program to store each line from a file in a
  vector<string>. Now use an istringstream to read each element from
  the vector a word at a time.
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <vector>
std::istream &ReadStreamToVec(std::istream &is, std::vector<std::string> &vs) {
  std::string buf;
  while (getline(is, buf)) {
    vs.push_back(buf);
  }

  is.clear();

  return is;
}

int main(int argc, char **argv) {
  if (2 != argc) {
    std::cout << "Please enter a file name:" << std::endl;
    return EXIT_FAILURE;
  }

  std::ifstream ifs(argv[1]);

  std::vector<std::string> vs;
  if (ifs) {

    while (ReadStreamToVec(ifs, vs))
      ;

    for (const auto &s : vs) {
      std::istringstream iss(s);

      std::string word;

      while (iss >> word)
        std::cout << word << std::endl;
    }

  } else {
    std::cout << "Can't open file " << argv[1];
  }

  return 0;
}
