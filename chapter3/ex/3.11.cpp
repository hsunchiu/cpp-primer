#include <iostream>
#include <string>

using std::string;
using std::cout;

int main()
{
  const string strings = "Keep out!";
  for(auto &c: strings){
    cout << strings;   // it's legal
    //    c = 'X';          // it's illegal
  }
  
  return 0;
}
