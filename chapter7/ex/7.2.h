/*
  Exercise 7.2: Add the combine and isbn members to the Sales_data class you
  wrote for the exercises in § 2.6.2 (p. 76).
 */
#ifndef CH7_7_2_H
#define CH7_7_2_H
#include <string>
struct Sales_data {
  std::string bookNo;

  double sold_units;
  double revenue;

  std::string isbn() const { return bookNo; }

  Sales_data &combine(Sales_data &lhs) {
    sold_units += lhs.sold_units;
    revenue += lhs.revenue;
    return *this;
  }
};

#endif
