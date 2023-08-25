/*
  Exercise 10.17: Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a
  lambda in the call to sort instead of the compareIsbn function.
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Sales_data {
  friend bool compareIsbn(const Sales_data &, const Sales_data &);

public:
  Sales_data() = default;
  Sales_data(const std::string isbn) : bookNo(isbn) {}
  std::string isbn() const { return this->bookNo; }

private:
  std::string bookNo;
};

int main() {
  vector<Sales_data> books = {{"hello"}, {"world"}, {"ni"}, {"hao"}};

  stable_sort(books.begin(), books.end(),
              [](const Sales_data &lhs, const Sales_data &rhs) {
                return lhs.isbn() < rhs.isbn();
              });

  for_each(books.cbegin(), books.cend(),
           [](const Sales_data &ths) { cout << ths.isbn() << " "; });

  cout << endl;

  return 0;
}
