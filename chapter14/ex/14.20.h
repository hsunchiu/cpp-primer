/*
  Exercise 14.20: Define the addition and compound-assignment operators
  for your Sales_data class.
 */
#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <string>
class Sales_data {
  inline friend Sales_data operator+(Sales_data &lhs, Sales_data &rhs) {
    // copy initialize
    Sales_data temp = lhs;
    temp += rhs;
    return temp;
  }

public:
  Sales_data &operator+=(Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
  }

private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

#endif
