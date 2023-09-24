/*
  Exercise 7.1: Write a version of the transaction-processing program from § 1.6
  (p. 24) using the Sales_data class you defined for the exercises in § 2.6.1
  (p.72).
 */

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <fstream>
#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  std::string isbn() const { return bookNo; }

  Sales_data &combine(const Sales_data &rhs);
};

inline Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;

  return *this;
}

#endif
