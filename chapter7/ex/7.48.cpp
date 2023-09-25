#include <string>

struct Sales_data {
  explicit Sales_data(std::string &s) {}
  Sales_data &combine(Sales_data &item);
};

int main() {
  std::string null_isbn("9-999-99999-9");
  Sales_data item1(null_isbn);
  //  Sales_data item2(std::string());
}
