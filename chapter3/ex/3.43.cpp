#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
  int  ia[2][3][4] = {0,1,2,3,4,5,6,7,8,9,10,11,
		      12,13,14,15,16,17,18,19,20,21,22,23};

  // a range for to manage the interation.
  for(const int(&o)[3][4] : ia)
    for(const int(&p)[4] : o)
      for(const int &q : p){
	cout << q << " ";
      }
  cout << endl;

  // ordinary for loop using subscripts
  for(size_t i = 0; i != 2; ++i)
    for(size_t j = 0; j != 3; ++j)
      for(size_t k = 0; k != 4; ++k){
	cout << ia[i][j][k] << " ";
      }
  cout << endl;

  // using pointers.
  for(int(*o)[3][4] = ia; o != ia + 2; ++o)
    for(int(*p)[4] = *o; p != *o + 3; ++p)
      for(int *q = *p; q != *p + 4; ++q){
	cout << *q << " ";
      }
  cout << endl;

  return 0;


}
