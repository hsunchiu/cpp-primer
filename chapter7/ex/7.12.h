/*
  Exercise 7.12: Move the definition of the Sales_data constructor that
  takes an istream into the body of the Sales_data class.
 */

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <istream>
#include <string>
struct Sales_data {
  std::string bookNo;
  unsigned sold_units = 0;
  double revenue = 0.0;

  Sales_data() = default;
  Sales_data(std::string s) : bookNo(s), sold_units(0), revenue(0.0){};
  Sales_data(std::istream &is) {
    is >> bookNo;
    is >> sold_units;
    is >> revenue;
  }
};

#endif
