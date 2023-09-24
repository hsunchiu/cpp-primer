/*
  Exercise 7.6: Define your own versions of the add, read, and print
functions.
 */

#ifndef SALES_DATA
#define SALES_DATA
#include <istream>
#include <string>
struct Sales_data {
  std::string bookNo;
  double sold_uints;
  double revenue;

  std::string isbn() const { return bookNo; }

  Sales_data &combine(const Sales_data &rhs) {
    sold_uints += rhs.sold_uints;
    revenue += rhs.revenue;
    return *this;
  }
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::ostream &print(std::ostream &os, Sales_data &item);
std::istream &read(std::istream &is, Sales_data &rhs);

#endif
