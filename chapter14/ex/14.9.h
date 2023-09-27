/*
  Exercise 14.9: Define an input operator for your Sales_data class.
 */
#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <istream>
#include <string>

class Sales_data {
  inline friend std::istream &operator>>(std::istream &is, Sales_data &item) {
    double price;

    is >> item.bookNo >> item.uints_sold >> price;

    if (is)
      item.revenue = item.uints_sold * price;
    else
      /* create a tempory object, and do a copy assignment */
      item = Sales_data();

    return is;
  }

private:
  std::string bookNo;
  unsigned uints_sold = 0.0;
  double revenue = 0.0;
};

#endif
