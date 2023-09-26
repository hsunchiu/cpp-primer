/*
  Exercise 8.6: Rewrite the bookstore program from § 7.1.1 (p. 256) to read
  its transactions from a file. Pass the name of the file as an argument to main
  (§ 6.2.5, p. 218).
 */

#include "8.6.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
int main(int argc, char **argv) {

  if (2 != argc) {
    std::cout << "Please enter one file name:" << std::endl;
    return EXIT_FAILURE;
  }

  std::ifstream ifs(argv[1]);

  // read the file, if the file scream is okay
  if (ifs) {
    Sales_data total;
    if (read(ifs, total)) { // read the first item.
      Sales_data trans;
      while (read(ifs, trans)) {
        if (total.isbn() == trans.isbn()) {
          total.combine(trans);
        } else {
          print(std::cout, total) << std::endl;
          total = trans; // store the current data
        }
      }
    } else {
      print(std::cout, total) << std::endl; // print the last item.
    }
  } else {
    std::cout << "Can't open file: " << argv[1] << std::endl;
  }
}
