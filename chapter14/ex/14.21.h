#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <string>

class Sales_data {
  inline friend Sales_data operator+(Sales_data &lhs, Sales_data &rhs) {
    Sales_data temp;
    temp.units_sold = lhs.units_sold + rhs.units_sold;
    temp.revenue = lhs.revenue + rhs.revenue;
    return temp;
  }

public:
  Sales_data &operator+=(Sales_data &item) {
    *this = *this + item;
    return *this;
  }

private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
#endif
