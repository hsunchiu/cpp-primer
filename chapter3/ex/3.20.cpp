#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int var;
  vector<int> ivec;
  while(cin >> var){
    ivec.push_back(var);
  }

  if(ivec.empty()){
    cout << "input at least on integer!" << endl;
  }
  else if(ivec.size() == 1){
    cout << ivec[0] << " don't have any adjacent elements." << endl;
    
    return -1;
  }
  else{
    for(decltype(ivec.size()) i = 0; i < ivec.size() - 1; i++){
      cout << ivec[i] + ivec[i + 1] << ' ';
    }
    cout << endl;
  }
  
  decltype(ivec.size()) size = ivec.size();
  if(size % 2 != 0)
    size = size / 2 + 1;
  else
    size = size / 2;

  for(decltype(ivec.size()) i = 0; i < size; i++){
    cout << ivec[i] + ivec[ivec.size()-i-1] << ' ';
  }
  cout << endl;

  return 0;
}
