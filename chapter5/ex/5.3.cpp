#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(int argc, char **argv)
{
  int sum = 0, val = 1;

  while(val <= 10)
    sum += val, val++;

  cout << "the sum of 1 to 10 inclusive 10 is "
       << sum << endl;

  return 0;
  

}
