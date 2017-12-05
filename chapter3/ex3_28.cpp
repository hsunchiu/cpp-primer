#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


string sa[10];
int ia[10];

int main()
{
  for(auto str : sa){
    cout << str << " ";
  }
  cout << endl;

  for(auto i : ia){
    cout << i << " ";
  }
  cout << endl;

  string sa2[10];
  int a2[10];

  for(auto str : sa2){
    cout << str << " ";
  }
  cout << endl;

  for(auto i : a2){
    cout << i << " ";
  }
  cout << endl;
  
  return 0;
  

}
