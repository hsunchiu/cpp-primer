#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string word;
  vector<string> vec;
  
  while(cin >> word){
    vec.push_back(word);
  }

  for(auto & str : vec){
    for(auto & c : str){
      c = toupper(c);
    }
  }

  for(decltype(vec.size()) i = 0; i < vec.size(); i++){
    cout << vec[i] << endl;
  }

  return 0;
}
