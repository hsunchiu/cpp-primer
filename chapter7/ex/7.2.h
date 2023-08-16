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
