/*
  Exercise 15.7: Define a class that implements a limited discount strategy,
  which applies a discount to books purchased up to a given limit. If the
  number of copies exceeds that limit, the normal price applies to those
  purchased beyond the limit.
 */

#ifndef _BOOKSTORE_H
#define _BOOKSTORE_H
/*the bookstore base class and dirived calssed*/
#include <istream>
#include <string>
#include <vector>

class Quote {
public:
  Quote() = default;
  Quote(const std::string &book, double sales_price)
      : bookNo(book), price(sales_price) {}
  std::string isbn() const { return bookNo; }

  // returns the total sales price for the specified number of items
  // derived calssed will override and apply different discout algorithms
  virtual double net_price(std::size_t n) const { return n * price; }

  virtual ~Quote() = default; /* dynamic binding for the desctructor */

private:
  std::string bookNo; /* ISBN number of this item */

protected:
  double price = 0.0; /* nornal, undiscounted price */
};

class Bulk_quote : public Quote {
public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &, double, std::size_t, double);
  double net_price(std::size_t n) const override;

private:
  std::size_t min_qty = 0; /* minimum purchase for the discount to apply */
  double discount = 0.0;   /* fractional discount to apply */
};

class Limit_quote : public Bulk_quote {
public:
  Limit_quote(const std::string &, double, std::size_t, std::size_t, double);
  double net_price(std::size_t n) const override;

private:
  std::size_t max_qty = 0;
};

inline Limit_quote::Limit_quote(const std::string &book, double p,
                                std::size_t qty, std::size_t max_qty,
                                double discount)
    : Bulk_quote(book, p, qty, discount), max_qty(max_qty) {}

inline double Limit_quote::net_price(std::size_t n) const {
  if (n >= max_qty) {
    return n * price;
  } else {
    return Bulk_quote::net_price(
        n); // check that does the bass class capture the data member?
  }
}

inline Bulk_quote::Bulk_quote(const std::string &book, double p,
                              std::size_t qty, double disc)
    : Quote(book, p), min_qty(qty), discount(disc) {}

inline double Bulk_quote::net_price(size_t cnt) const {
  if (cnt >= min_qty)
    return cnt * (1 - discount) * price;
  else
    return cnt * price;
}

inline double print_total(std::ostream &os, const Quote &item, size_t n) {
  // depending on the ytpe of the object bound to the item parameter
  double ret = item.net_price(n);

  os << "ISBN: " << item.isbn() /* calls Quote::isbn */
     << " # sold: " << n << " total due: " << ret << std::endl;

  return ret;
}

#endif
