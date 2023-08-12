#include <iostream>

using std::cout;
using std::endl;


int main()
{
  constexpr int MAX_STR_LEN = 512;
  char cs1[MAX_STR_LEN] = "hello";
  char cs2[MAX_STR_LEN] = "world";
  char cs3[MAX_STR_LEN];

  strcpy(cs3,cs1);
  strcat(cs3," ");
  strcat(cs3,cs2);

  cout << cs3 << endl;

  return 0;
  



}
