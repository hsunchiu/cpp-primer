/*
 * Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
 * 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define
 * your Sales_data class in the same file as your main function.
 */

// TODO:

#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
