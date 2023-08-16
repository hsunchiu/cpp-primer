#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
  std::string bookNo;
  unsigned units_sold;
  double revenue;

  Sales_data(std::string s = "", unsigned u = 0, double r = 0.0) {
    bookNo = s;
    units_sold = u;
    revenue = r;
  }
}

#endif
