/*
  Exercise 10.29: Write a program using stream iterators to read a text file
  into a vector of strings.
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  if (argc != 2) {
    cout << "Please enter a file name!" << endl;
    return EXIT_FAILURE;
  }

  ifstream in(argv[1]);
  vector<string> vs;

  std::istream_iterator<std::string> in_iter(in), eof;

  while (in_iter != eof) {
    vs.push_back(*in_iter++);
  }

  for_each(vs.cbegin(), vs.cend(), [](const string &s) { cout << s << " "; });

  cout << endl;
}
