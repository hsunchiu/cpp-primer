/*
  Exercise 15.15: Define your own versions of Disc_quote and
  Bulk_quote.
 */

#include <iostream>
#include <string>

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

class Disc_quote : public Quote {
public:
  Disc_quote() = default;
  Disc_quote(std::string const &b, double p, size_t q, double d)
      : Quote(b, p), quantity(q), discount(d) {}
  virtual double net_price(size_t) const = 0;

protected:
  size_t quantity = 0;
  double discount = 0.0;
};

class Bulk_quote : public Disc_quote {
public:
  Bulk_quote() = default;
  Bulk_quote(std::string const &book, double price, size_t qty, double disc)
      : Disc_quote(book, price, qty, disc) {}
  virtual double net_price(std::size_t cnt) const override {
    if (cnt >= quantity)
      return cnt * (1 - discount) * price;
    else
      return cnt * price;
  }
};

// is possible to define a object a class with a pure virtual function , the
// answer is no.
inline double Disc_quote::net_price(size_t n) const {
  std::cout << "try to define a pure virtual function" << std::endl;

  return 0.0;
}
