#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <fstream>
#include <istream>
#include <ostream>
#include <string>

class Sales_data {
  friend double avg_price(Sales_data &lhs, Sales_data &rhs);
  friend std::istream &read(std::istream &is, Sales_data &item);
  friend std::ostream &print(std::ostream &os, Sales_data &item) {
    os << item.bookNo << " " << item.units_sold << " " << item.revenue;

    return os;
  };

public:
  Sales_data() = default;

  std::string isbn() const { return this->bookNo; }
  Sales_data &combine(const Sales_data &item) {
    this->revenue += item.revenue;
    this->units_sold += item.units_sold;

    return *this;
  }

private:
  std::string bookNo;
  unsigned units_sold;
  double revenue;
};

inline double avg_price(Sales_data &lhs, Sales_data &rhs) {
  return (lhs.revenue + rhs.revenue) / (lhs.units_sold + rhs.units_sold);
}

inline std::istream &read(std::istream &is, Sales_data &rhs) {

  is >> rhs.bookNo;
  is >> rhs.units_sold;
  is >> rhs.revenue;
  return is;
}

#endif
