#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string str;
  while(getline(cin,str)){
    for(auto &c : str){
      c = 'X';
    }
    cout << str << endl;
  }

  return 0;

}
