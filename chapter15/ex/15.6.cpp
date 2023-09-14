/*
  Exercise 15.6: Test your print_total function from the exercises in §
  15.2.1 (p. 595) by passing both Quote and Bulk_quote objects o that
  function.
 */
#include "15.5.h"
#include <iostream>

int main() {

  Quote book1("book1", 10);
  Bulk_quote book2("book2", 10, 100, 0.3);

  //  Quote *p = &book1;

  print_total(std::cout, book1, 5);
  print_total(std::cout, book2, 100);
}
