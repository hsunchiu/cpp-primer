/*
  Exercise 10.32: Rewrite the bookstore problem from § 1.6 (p. 24) using a
  vector to hold the transactions and various algorithms to do the processing.
  Use sort with your compareIsbn function from § 10.3.1 (p. 387) to
  arrange the transactions in order, and then use find and accumulate to
  do the sum.
 */

#include <iostream>
#include <istream>
#include <iterator>
#include <vector>

using namespace std;

class Sales_data {
  friend bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs);
  friend std::istream &operator>>(std::istream &, Sales_data &);

public:
  std::string isbn() const { return this->bookNo; }

  Sales_data &operator+=(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
  }

private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
  return lhs.bookNo < rhs.bookNo;
}

std::istream &operator>>(std::istream &in, Sales_data &s) {
  double price;
  in >> s.bookNo >> s.units_sold >> price;
  // check that the inputs succeeded
  if (in)
    s.revenue = s.units_sold * price;
  else
    s = Sales_data(); // input failed: reset object to default state
  return in;
}

int main() {
  istream_iterator<Sales_data> item_iter(cin), eof;
  ostream_iterator<Sales_data> out_iter(cout, "\n");

  Sales_data sum = *item_iter++;

  while (item_iter != eof) {
    // if the current transaction (which is stored in item_iter) has the same
    // ISBN
    if (item_iter->isbn() == sum.isbn())
      sum += *item_iter++; // add it to sum and read the next
    else {
      out_iter = sum;     // write the current sum
      sum = *item_iter++; // read the next transactio
    }
  }
}
