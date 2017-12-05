#include <iostream>

int main()
{
  int curVal = 0, val = 0;
  
  if(std::cin >> curVal){ //get the first value from the input.
    int cnt = 1;

    while(std::cin >> val){
      if(val == curVal){
	cnt ++;
      }
      else{
	std::cout << curVal << " occurs "
		  << cnt << " time(s) " << std::endl;

	curVal = val;   //record the new value
	cnt = 1;
      }  
    } /*end of the while loop.*/
    
    //print the last data
    std::cout << curVal << " occurs "
	      << cnt << " time(s) " << std::endl;
    
  } /*end of the if.*/

  return 0;
}

