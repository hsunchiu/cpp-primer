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
    largerStr += str;
  }
  cout << largerStr << endl;

  return 0;

}
