#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item curBook;
  //  int cnt = 0;

  if(std::cin >> curBook){
    int cnt = 1;
    
    Sales_item book;

    while(std::cin >> book){
      if(book.isbn() == curBook.isbn()){
	cnt ++;
	curBook += book;
      }
      else{
	
	std::cout <<  curBook.isbn() << " --- " << cnt;
	std::cout << std::endl;
	std::cout << curBook << std::endl;

	cnt = 1;
	curBook = book;
      }
    }

    std::cout << curBook.isbn() << " --- " << cnt;
    std::cout << std::endl;
    std::cout << curBook << std::endl;
  }
  else{
    
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  
  return 0;

}
