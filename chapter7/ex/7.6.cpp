#include "7.6.h"
#include <iostream>
#include <ostream>

std::istream &read(std::istream &is, Sales_data &rhs) {
  double price;
  is >> rhs.bookNo;
  is >> rhs.sold_uints;
  is >> price;

  rhs.revenue = price * rhs.sold_uints;

  return is;
}

std::ostream &print(std::ostream &os, Sales_data &item) {
  os << item.isbn() << " " << item.sold_uints << " " << item.revenue
     << std::endl;

  return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {

  Sales_data sum = lhs;

  sum.combine(rhs);

  return lhs;
}
