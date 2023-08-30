/*
  Exercise 11.11: Redefine bookstore without using decltype.
 */
#include <set>
#include <string>

using namespace std;

class Sales_data {

public:
  string isbn() const { return bookNo; }

private:
  string bookNo;
};

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
  return lhs.isbn() < rhs.isbn();
}

// using compareType = bool (*)(const Sales_data&, const Sales_data);
// tydedef boo(*compareType)(const Sales_data&lhs,const Sales_data&rhs);

int main() {
  multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)>
      bookstore(compareIsbn);
}
