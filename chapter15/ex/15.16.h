/*
  Exercise 15.16: Rewrite the class representing a limited discount strategy,
  which you wrote for the exercises in § 15.2.2 (p. 601), to inherit from
  Disc_quote.
 */
#ifndef _BOOKSTORE_H
#define _BOOKSTORE_H
#include "15.15.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Limit_quote : public Disc_quote {
public:
  Limit_quote() = default;
  Limit_quote(string const &book, double p, size_t min, size_t max, double dist)
      : Disc_quote(book, p, min, dist), max_qty(max) {}

  double net_price(size_t cnt) const final override {
    if (cnt > max_qty)
      return max_qty * (1 - discount) * price + (cnt - max_qty) * price;
    else if (cnt >= quantity)
      return cnt * (1 - discount) * price;
    else
      return cnt * price;
  }

private:
  size_t max_qty = 0;
};

#endif
