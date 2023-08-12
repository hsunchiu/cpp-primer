#include <iostream>

using std::cout;
using std::endl;

int main()
{
  constexpr size_t array_size = 10;
  
  int ia[array_size];
  
  for(size_t i; i != array_size; ++i){
    ia[i] = i;
  }
  
  return 0;

}
