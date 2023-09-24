/*
  Exercise 7.14: Write a version of the default constructor that explicitly
  initializes the members to the values we have provided as in-class
  initializers.
 */

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
};

#endif
