#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::iterator;
using std::cin;
using std::cout;
using std::endl;



int main()
{
  std::cout << "Please enter 10 integers:" << endl;
  
  
  vector<int> ivec;
  int i;
  while(cin >> i){
    ivec.push_back(i);
  }

  if(ivec.size() == 10){
    for(auto it = ivec.begin(); it != ivec.end(); ++it){
      *it *= 2;
      cout << *it << ' ';
    }
    cout << endl;
  }
  else{
    cout << "the numbers of the integer is illegal!" << endl;
  }

  return 0;

}
