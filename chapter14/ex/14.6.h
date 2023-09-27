/*
  Exercise 14.6: Define an output operator for your Sales_data class.
 */

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <ostream>
#include <string>

class Sales_data {
public:
  inline friend std::ostream &operator<<(std::ostream &os,
                                         const Sales_data &item);

private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

std::ostream &operator<<(std::ostream &os, const Sales_data &item) {
  os << item.bookNo << " " << item.units_sold << " " << item.revenue << " ";
  return os;
}

#endif
