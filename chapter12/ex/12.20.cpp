/*
 Exercise 12.20: Write a program that reads an input file a line at a time
 into a StrBlob and uses a StrBlobPtr to print each element in that
 StrBlob.
 */

#include "12.19.h"
#include <fstream>
#include <iostream>

int main() {
  std::ifstream ifs("data/books.txt");
  StrBlob blob;
  for (std::string str; std::getline(ifs, str);)
    blob.push_back(str);
  for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend;
       pbeg.incr())
    std::cout << pbeg.deref() << std::endl;
}
