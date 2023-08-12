#include <iostream>

int main()
{
  int v1 = 0, v2 = 0;
  std::cout << "Enter two integers:" << std::endl;
  std::cin >> v1 >> v2;

  if(v1 > v2){
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
  }

  for(v1; v1 <= v2; v1++)
    std::cout << v1 << " ";
  std::cout << std::endl;
  
  return 0;
}
