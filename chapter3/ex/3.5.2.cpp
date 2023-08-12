#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string largerStr, str;
  while(cin >> str){
    if(largerStr.empty())
      largerStr += str;
    else
      largerStr += " " + str;
  }
  cout << largerStr << endl;

  return 0;

}
