/*
 * Exercise 1.24: Test the previous program by giving multiple transactions
 * representing multiple ISBNs. The records for each ISBN should be grouped
 * together.
 */

#include "../Sales_item.h"
#include <iostream>

int main() {
  Sales_item total;

  if (std::cin >> total) {
    Sales_item trans;

    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  return 0;
}
