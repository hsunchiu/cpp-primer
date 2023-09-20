/*
 * Exercise 3.2: Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 */
#include <cstring>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc > 2) {
    std::cerr << "Please enter the  option -l to read a line." << std::endl;
    std::cerr << "without option, the program " << argv[0] << " read word"
              << std::endl;
  }

  // https://stackoverflow.com/questions/59451386/segmentation-fault-when-using-argv1
  if (argc == 2 && strcmp(argv[1], "-l") == 0 ||
      argc == 2 && strcmp(argv[1], "-L") == 0) {
    std::string line;
    while (std::getline(std::cin, line)) {
      std::cout << line << std::endl;
    }
  }

  // no command line option
  if (argc == 1) {
    std::string word;
    while (std::cin >> word) {
      std::cout << word << std::endl;
    }
  }
}
