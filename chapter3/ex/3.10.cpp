#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
  string input,output;

  
  while(getline(cin,input)){
    if(input.size()){
      for(auto c : input){
	if(!ispunct(c)){
	  output += c;
	}
      }
      cout << input << endl;
      cout << output << endl;
      output = "";    //clear the output
    }

  }
  
  return 0;
}
