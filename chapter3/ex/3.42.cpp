#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

#if 0
inline void print_int_array(int * array)
{
  for(auto it = begin(array); it != end(array); ++it){
    cout << *it << " ";
  }
  cout << endl;
}
#endif

int main(int argc, char **agrv)
{
  constexpr size_t INT_ARRAY_SIZE = 10;
  int ia[INT_ARRAY_SIZE];

  vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

  for(auto it = ivec.begin(); it != ivec.end(); ++it){
    ia[it - ivec.begin()] = *it;
  }
  
  //print_int_array(ia);
  for(auto it = begin(ia); it != end(ia); ++it){
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
