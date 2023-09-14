#include "15.7.h"

#include <iostream>

int main() {
  Quote quote("quote", 5.0);
  Bulk_quote bulk_quote("bulk_quote", 5.0, 10, 0.5);
  Limit_quote limit_quote("limit_qute", 5.0, 10, 20, 0.5);

  print_total(std::cout, quote, 30);
  print_total(std::cout, bulk_quote, 30);
  print_total(std::cout, limit_quote, 30);
}
