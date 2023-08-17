#include "8.8.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
int main(int argc, char **argv) {

  if (3 != argc) {
    std::cout << "Please enter the src file name and dst file name."
              << std::endl;
    return EXIT_FAILURE;
  }

  std::ifstream ifs(argv[1]);
  std::ofstream ofs(argv[2], std::iostream::app);

  // read the file, if the file scream is okay
  if (ifs) {
    Sales_data total;
    if (read(ifs, total)) { // read the first item.
      Sales_data trans;
      while (read(ifs, trans)) {
        if (total.isbn() == trans.isbn()) {
          total.combine(trans);
        } else {
          print(ofs, total) << std::endl;
          total = trans; // store the current data
        }
      }
    } else {
      print(ofs, total) << std::endl; // print the last item.
    }
  } else {
    std::cout << "Can't open file: " << argv[1] << std::endl;
  }
}
