/*
  Exercise 15.3: Define your own versions of the Quote class and the
  print_total function.
 */

#ifndef _BOOKSTORE_H
#define _BOOKSTORE_H
/*the bookstore base class and dirived calssed*/
#include <istream>
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

class Bulk_quote : public Quote {
public:
  double net_price(std::size_t n) const override;
};

inline double print_total(std::ostream &os, const Quote &item, size_t n) {
  // depending on the ytpe of the object bound to the item parameter
  double ret = item.net_price(n);

  os << "ISBN: " << item.isbn() /* calls Quote::isbn */
     << " # sold: " << n << " total due: " << ret << std::endl;

  return ret;
}

#endif
