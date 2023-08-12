#include <iostream>

int main()
{
  std::cout << "Enter two integers and list the numbers between them" 
	    << std::endl;
  
  int small = 0, big = 0;

  std::cin >> small >> big;

  if(small > big){
    int tmp = small;
    small = big;
    big = tmp;
  }
  
  for(int i = small; i <= big ; i ++){
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
