#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
  constexpr size_t array_size = 10;
  
  int ia[array_size];
  int ia2[array_size];

  for(size_t i; i != array_size; ++i){
    ia[i] = i;
  }

  for(size_t i; i != array_size; ++i){
    ia2[i] = ia[i];
  }

  // use vector

  vector<int>iv(10);
  
  for(auto iter = iv.begin(); iter != iv.end(); ++iter){
    *iter = iter - iv.begin();
  }

  vector<int>iv2(iv);
  
  for(auto i : iv2){
    cout << i << " ";
  }
  cout << endl;

  return 0;

}
