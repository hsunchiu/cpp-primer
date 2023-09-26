/*
  Exercise 8.1: Write a function that takes and returns an istream&. The
  function should read the stream until it hits end-of-file. The function should
  print what it reads to the standard output. Reset the stream so that it is
  valid before returning the stream.
 */

#include <iostream>
#include <istream>
#include <string>
std::istream &func(std::istream &is) {

  std::string buf;
  while (is >> buf)
    std::cout << buf;

  is.clear();
  return is;
}

int main() {
  func(std::cin);
  return 0;
}
