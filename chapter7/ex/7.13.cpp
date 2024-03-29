#include "7.13.h"
#include <iostream>

int main() {
  Sales_data total(std::cin);
  if (!total.isbn().empty()) {
    std::istream &is = std::cin;
    while (is) {
      Sales_data trans(is);
      if (total.isbn() == trans.isbn())
        total.combine(trans);
      else {
        print(std::cout, total) << std::endl;
        total = trans;
      }
    }
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  return 0;
}
