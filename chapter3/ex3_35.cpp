#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
  int ia[10];

  for(auto beg = begin(ia); beg != end(ia); ++beg){
    *beg = 0;
  }

  for(auto i : ia){
    cout << i << " ";
  }
  cout << endl;

  return 0;
  
}
