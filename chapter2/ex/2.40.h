/*
 * Exercise 2.40: Write your own version of the Sales_data class.
 */
#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <string>

struct Sale_data {
  std::string bookNo;
  std::string bookName;
  std::string units_sold;
  unsigned uints_sold = 0;
  double revenue = 0.0;
  double price = 0.0;
  ///.....
};

#endif
