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

#endif
