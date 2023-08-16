#include "7.1.h"
#include <iostream>
#include <ostream>

using namespace std;

ostream &print(const Sales_data &item) {
  cout << item.isbn() << " " << item.units_sold << " " << item.revenue;
  return cout;
}

int main() {
  Sales_data total;
  if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;

    while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
        total.combine(trans);
      } else {
        print(total) << endl;
        total = trans;
      }
    }

    print(total) << endl;
  } else {
    cerr << "No data?!" << endl;
  }
}
