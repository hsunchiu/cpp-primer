#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string str1("hello");
  string str2("world");
  
  if(str1 == str2){
    cout << "same string: " << "\"" << str1 << "\"" << endl;
  }
  else if(str1 > str1){
    cout << "\"" << str1 << "\"" << " is bigger than " 
	 << "\"" << str2 << "\"" << endl;
  }
  else{
    cout << "\"" << str1 << "\"" << " is more little than "
	 << "\"" << str2 << "\"" << endl;
  }



  const char * cs1 = "hsun";
  const char * cs2 = "hsun";

  auto result = strcmp(cs1,cs2);
  
  if(result == 0){
    cout << "same result: " << "\""
	 << cs1 << "\"" << endl;
  }
  else if(result > 0){
    cout << "\"" << cs1 << "\"" << ">"
	 << "\"" << cs2 << "\"" << endl;
  }
  else{
    cout << "\"" << cs1 << "\"" << "<"
	 << "\"" << cs2 << "\"" << endl;
  }
  
  return 0;
  

}
