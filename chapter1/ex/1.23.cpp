/*
 * Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of
 * Sales_item.h in the Chapter 1 code directory. Copy that file to your
 * working directory. Use it to write a program that reads a set of book sales
 * transactions, writing each transaction to the standard output.
 */
#include "../Sales_item.h"
#include <iostream>

int main() {
  Sales_item curBook;
  //  int cnt = 0;

  if (std::cin >> curBook) {
    int cnt = 1;

    Sales_item book;

    while (std::cin >> book) {
      if (book.isbn() == curBook.isbn()) {
        cnt++;
        curBook += book;
      } else {

        std::cout << curBook.isbn() << " --- " << cnt;
        std::cout << std::endl;
        std::cout << curBook << std::endl;

        cnt = 1;
        curBook = book;
      }
    }

    std::cout << curBook.isbn() << " --- " << cnt;
    std::cout << std::endl;
    std::cout << curBook << std::endl;
  } else {

    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  return 0;
}
