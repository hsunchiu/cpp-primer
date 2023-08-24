/*
 Exercise 10.12: Write a function named compareIsbn that compares the
 isbn() members of two Sales_data objects. Use that function to sort a
 vector that holds Sales_data objects.
 */

#include <algorithm>
#include <iostream>
#include <string>
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

bool compareIsbn(const Sales_data &item1, const Sales_data &item2) {
  return item1.bookNo < item2.bookNo;
}

int main() {
  vector<Sales_data> books = {{"hello"}, {"world"}, {"1"}, {"2"}};
  stable_sort(books.begin(), books.end(), compareIsbn);

  for (const auto item : books) {
    cout << item.isbn() << endl;
  }

  return 0;
}
