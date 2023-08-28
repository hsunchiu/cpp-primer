/*
  Exercise 10.33: Write a program that takes the names of an input file and
  two output files. The input file should hold integers. Using an
  istream_iterator read the input file. Using ostream_iterators, write
  the odd numbers into the first output file. Each value should be followed by a
  space. Write the even numbers into the second file. Each of these values
  should be placed on a separate line.
 */

#include <fstream>
#include <iostream>
#include <istream>
#include <iterator>
#include <string>

using namespace std;

void usage(void) {
  cout << "Please enter three args: first for input file(numbers), second for "
          "odd number output file, third for even number file"
       << endl;
}

int main(int argc, char **argv) {
  if (argc != 4)
    usage();

  ifstream input_file(argv[1]);
  istream_iterator<int> input_iter(input_file), eof;

  ofstream odd_file(argv[2]);
  ofstream even_file(argv[3]);

  ostream_iterator<int> odd_iter(odd_file, "\n");
  ostream_iterator<int> even_iter(even_file, "\n");

  while (input_iter != eof) {
    if (*input_iter % 2) { // odd number
      *odd_iter++ = *input_iter++;
    } else { // evne number
      *even_iter++ = *input_iter++;
    }
  }

  return 0;
}
